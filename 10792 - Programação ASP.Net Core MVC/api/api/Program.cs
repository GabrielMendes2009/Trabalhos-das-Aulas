using Microsoft.AspNetCore.Authentication.JwtBearer;
using Microsoft.EntityFrameworkCore;
using Microsoft.IdentityModel.Tokens;
using Microsoft.OpenApi.Models;
using System.Text;
using api.Data;
using api.Services;
using Swashbuckle.AspNetCore.Filters;
using Polly;
using Polly.Extensions.Http;
using System.Text.Json.Serialization;

var builder = WebApplication.CreateBuilder(args);

// --- Configuração dos Serviços ---

// Controladores com tratamento de ciclos JSON
builder.Services.AddControllers().AddJsonOptions(x => x.JsonSerializerOptions.ReferenceHandler = ReferenceHandler.IgnoreCycles);

// Swagger com suporte para Autenticação JWT
builder.Services.AddEndpointsApiExplorer();
builder.Services.AddSwaggerGen(options =>
{
    options.SwaggerDoc("v1", new OpenApiInfo 
    { 
        Title = "Video Games API", 
        Version = "v1",
        Description = "API para gestão de videojogos com JWT e Resiliência Polly"
    });
    
    // o Swagger agora sabe que é um esquema Bearer
    options.AddSecurityDefinition("Bearer", new OpenApiSecurityScheme
    {
        In = ParameterLocation.Header,
        Description = "Por favor, insira APENAS o token JWT",
        Name = "Authorization",
        Type = SecuritySchemeType.Http,
        BearerFormat = "JWT",
        Scheme = "bearer"
    });

    options.AddSecurityRequirement(new OpenApiSecurityRequirement
    {
        {
            new OpenApiSecurityScheme
            {
                Reference = new OpenApiReference
                {
                    Type = ReferenceType.SecurityScheme,
                    Id = "Bearer"
                }
            },
            new string[]{}
        }
    });
});

// Banco de Dados em Memória
builder.Services.AddDbContext<AppDbContext>(options => options.UseInMemoryDatabase("VideoGamesDb"));

// Autenticação JWT
builder.Services.AddAuthentication(JwtBearerDefaults.AuthenticationScheme)
    .AddJwtBearer(options =>
    {
        options.TokenValidationParameters = new TokenValidationParameters
        {
            ValidateIssuerSigningKey = true,
            IssuerSigningKey = new SymmetricSecurityKey(Encoding.UTF8
                .GetBytes(builder.Configuration.GetSection("AppSettings:Token").Value!)),
            ValidateIssuer = false,
            ValidateAudience = false
        };
    });

// Polly - Políticas de Resiliência
var retryPolicy = HttpPolicyExtensions.HandleTransientHttpError().WaitAndRetryAsync(3, retryAttempt => TimeSpan.FromSeconds(Math.Pow(2, retryAttempt)));

var circuitBreakerPolicy = HttpPolicyExtensions.HandleTransientHttpError().CircuitBreakerAsync(2, TimeSpan.FromSeconds(30));

// HttpClient com Polly
builder.Services.AddHttpClient<ImposterService>().AddPolicyHandler(retryPolicy).AddPolicyHandler(circuitBreakerPolicy);

// Cache Local
builder.Services.AddMemoryCache();

var app = builder.Build();

// Popula dados iniciais
using (var scope = app.Services.CreateScope())
{
    var services = scope.ServiceProvider;
    var context = services.GetRequiredService<AppDbContext>();
    DataSeeder.Seed(context);
}

// Configuração do Swagger
app.UseSwagger();
app.UseSwaggerUI(c =>
{
    c.SwaggerEndpoint("/swagger/v1/swagger.json", "Video Games API V1");
    c.RoutePrefix = "swagger";
});

// Redireciona a raiz (/) para o Swagger (/swagger) automaticamente
app.MapGet("/", () => Results.Redirect("/swagger"));

app.UseHttpsRedirection();
app.UseAuthentication();
app.UseAuthorization();
app.MapControllers();

app.Run();
