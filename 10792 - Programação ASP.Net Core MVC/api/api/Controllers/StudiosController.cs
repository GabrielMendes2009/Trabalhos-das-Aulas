using Microsoft.AspNetCore.Mvc;
using Microsoft.EntityFrameworkCore;
using api.Models;
using api.Data;
using Microsoft.AspNetCore.Authorization;

namespace api.Controllers
{
    // Controlador para gestão de Estúdios
    [Route("api/[controller]")]
    [ApiController]
    public class StudiosController : ControllerBase
    {
        private readonly AppDbContext _context;

        public StudiosController(AppDbContext context)
        {
            _context = context;
        }

        // GET - Lista todos os estúdios
        [HttpGet]
        public async Task<ActionResult<IEnumerable<Studio>>> GetStudios()
        {
            return await _context.Studios.ToListAsync();
        }

        // POST - Cadastra um novo estúdio (Requer Autenticação JWT)
        [HttpPost]
        [Authorize]
        public async Task<ActionResult<Studio>> PostStudio(Studio studio)
        {
            _context.Studios.Add(studio);
            await _context.SaveChangesAsync();

            return Ok(studio);
        }

        // DELETE - Remove um estúdio (Requer Autenticação JWT)
        [HttpDelete("{id}")]
        [Authorize]
        public async Task<IActionResult> DeleteStudio(int id)
        {
            var studio = await _context.Studios.FindAsync(id);
            if (studio == null) return NotFound("Estúdio não encontrado.");

            _context.Studios.Remove(studio);
            await _context.SaveChangesAsync();

            return NoContent();
        }
    }
}
