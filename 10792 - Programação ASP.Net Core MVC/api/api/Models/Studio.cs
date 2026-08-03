using System.Collections.Generic;

namespace api.Models
{
    // Modelo que representa um Estúdio de Videojogos
    public class Studio
    {
        public int Id { get; set; }
        public string Name { get; set; } = string.Empty; // Nome do estúdio
        public string Country { get; set; } = string.Empty; // País de origem
        
        // Lista de jogos vinculados a este estúdio
        public List<Game> Games { get; set; } = new();
    }
}
