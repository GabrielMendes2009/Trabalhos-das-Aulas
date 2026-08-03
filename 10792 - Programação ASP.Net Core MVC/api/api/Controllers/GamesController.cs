using Microsoft.AspNetCore.Mvc;
using Microsoft.EntityFrameworkCore;
using api.Models;
using api.Data;
using Microsoft.Extensions.Caching.Memory;
using Microsoft.AspNetCore.Authorization;

namespace api.Controllers
{
    // Controlador para gestão de Videojogos com Cache
    [Route("api/[controller]")]
    [ApiController]
    public class GamesController : ControllerBase
    {
        private readonly AppDbContext _context;
        private readonly IMemoryCache _cache;
        private const string GamesCacheKey = "GamesList";

        public GamesController(AppDbContext context, IMemoryCache cache)
        {
            _context = context;
            _cache = cache;
        }

        // GET - Retorna todos os jogos
        [HttpGet]
        public async Task<ActionResult<IEnumerable<Game>>> GetGames()
        {
            // Tenta obter do cache para maior performance
            if (!_cache.TryGetValue(GamesCacheKey, out List<Game>? games))
            {
                // Se não houver no cache, busca no banco e salva no cache por 5 minutos
                games = await _context.Games.ToListAsync();
                _cache.Set(GamesCacheKey, games, TimeSpan.FromMinutes(5));
            }
            return Ok(games);
        }

        // POST - Adiciona um novo jogo (Requer Autenticação JWT)
        [HttpPost]
        [Authorize]
        public async Task<ActionResult<Game>> PostGame(Game game)
        {
            _context.Games.Add(game);
            await _context.SaveChangesAsync();

            // Invalida o cache para refletir a nova adição
            _cache.Remove(GamesCacheKey);

            return CreatedAtAction(nameof(GetGames), new { id = game.Id }, game);
        }

        // DELETE - Remove um jogo (Requer Autenticação JWT)
        [HttpDelete("{id}")]
        [Authorize]
        public async Task<IActionResult> DeleteGame(int id)
        {
            var game = await _context.Games.FindAsync(id);
            if (game == null) return NotFound("Jogo não encontrado.");

            _context.Games.Remove(game);
            await _context.SaveChangesAsync();
            
            _cache.Remove(GamesCacheKey);
            return NoContent();
        }
    }
}
