namespace api.Models
{
    public class Game
    {
        public int Id { get; set; }
        public string Title { get; set; } = string.Empty; // Nome do jogo
        public string Genre { get; set; } = string.Empty; // Gênero do jogo
        public decimal Price { get; set; } // Preço do jogo
        public string Sku { get; set; } = string.Empty; // Código único de inventário
        
        // Relacionamento opcional com Studio
        public int? StudioId { get; set; }
        public Studio? Studio { get; set; }
    }
}
