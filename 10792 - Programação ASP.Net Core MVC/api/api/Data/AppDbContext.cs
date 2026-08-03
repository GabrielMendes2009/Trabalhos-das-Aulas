using Microsoft.EntityFrameworkCore;
using api.Models;

namespace api.Data
{
    // Contexto do banco de dados utilizando Entity Framework Core
    public class AppDbContext : DbContext
    {
        public AppDbContext(DbContextOptions<AppDbContext> options) : base(options) { }

        // Tabelas do sistema
        public DbSet<Game> Games { get; set; }
        public DbSet<User> Users { get; set; }
        public DbSet<Studio> Studios { get; set; }
    }
}
