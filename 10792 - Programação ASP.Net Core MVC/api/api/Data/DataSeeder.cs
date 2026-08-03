using api.Models;
using System.Collections.Generic;
using System.Linq;

namespace api.Data
{
    // Classe para popular o banco de dados inicial
    public static class DataSeeder
    {
        public static void Seed(AppDbContext context)
        {
            // Adiciona estúdios se a tabela estiver vazia
            if (!context.Studios.Any())
            {
                var studios = new List<Studio>
                {
                    new Studio { Name = "Rockstar Games", Country = "USA" },
                    new Studio { Name = "Nintendo", Country = "Japan" },
                    new Studio { Name = "CD Projekt Red", Country = "Poland" }
                };

                context.Studios.AddRange(studios);
                context.SaveChanges();
            }

            // Adiciona jogos se a tabela estiver vazia
            if (!context.Games.Any())
            {
                var games = new List<Game>
                {
                    new Game { Title = "GTA V", Genre = "Action", Price = 59.99m, Sku = "GTA5-001", StudioId = 1 },
                    new Game { Title = "The Legend of Zelda", Genre = "Adventure", Price = 59.99m, Sku = "ZELDA-005", StudioId = 2 },
                    new Game { Title = "The Witcher 3", Genre = "RPG", Price = 39.99m, Sku = "W3-003", StudioId = 3 },
                    new Game { Title = "Cyberpunk 2077", Genre = "RPG", Price = 59.99m, Sku = "CP77-004", StudioId = 3 }
                };

                context.Games.AddRange(games);
                context.SaveChanges();
            }
        }
    }
}
