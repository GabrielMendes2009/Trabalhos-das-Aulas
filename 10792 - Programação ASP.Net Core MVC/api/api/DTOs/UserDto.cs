namespace api.DTOs
{
    // Objeto de transferência de dados para Login e Registro
    public class UserDto
    {
        public string Username { get; set; } = string.Empty;
        public string Password { get; set; } = string.Empty;
    }
}
