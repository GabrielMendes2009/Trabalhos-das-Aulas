namespace api.Models
{
    // Modelo que representa um Utilizador para autenticação
    public class User
    {
        public int Id { get; set; }
        public string Username { get; set; } = string.Empty; // Nome de utilizador
        public string PasswordHash { get; set; } = string.Empty; // Senha criptografada
        public string Role { get; set; } = "User"; // Papel no sistema (User/Admin)
    }
}
