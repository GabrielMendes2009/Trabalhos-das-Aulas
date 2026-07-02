namespace rentGames.Models
{
    public class Jogo
    {
        public int Id { get; set; }
        public string? Nome { get; set; }
        public string? Consola { get; set; } 
        public bool Alugado { get; set; }
    }
}
