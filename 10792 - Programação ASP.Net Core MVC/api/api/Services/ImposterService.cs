using System.Text.Json;
using System.Net.Http.Json;

namespace api.Services
{
    // Serviço que integra com o Mock Externo (Imposter)
    public class ImposterService
    {
        private readonly HttpClient _httpClient;
        private readonly IConfiguration _configuration;

        public ImposterService(HttpClient httpClient, IConfiguration configuration)
        {
            _httpClient = httpClient;
            _configuration = configuration;
        }

        // Simula consulta de inventário no sistema externo
        public async Task<object?> GetInventoryAsync(string sku)
        {
            var url = _configuration.GetSection("Imposter:InventoryUrl").Value;
            
            // O Polly aplicará automaticamente Retries e Circuit Breaker aqui
            var response = await _httpClient.GetAsync(url);
            
            if (response.IsSuccessStatusCode)
            {
                var content = await response.Content.ReadAsStringAsync();
                return JsonSerializer.Deserialize<object>(content);
            }
            return null;
        }

        // Simula processamento de pagamento no sistema externo
        public async Task<object?> ProcessPaymentAsync(object paymentRequest)
        {
            var url = _configuration.GetSection("Imposter:PaymentUrl").Value;
            
            // O Polly aplicará automaticamente Retries e Circuit Breaker aqui
            var response = await _httpClient.PostAsJsonAsync(url, paymentRequest);

            if (response.IsSuccessStatusCode)
            {
                var content = await response.Content.ReadAsStringAsync();
                return JsonSerializer.Deserialize<object>(content);
            }
            return null;
        }
    }
}
