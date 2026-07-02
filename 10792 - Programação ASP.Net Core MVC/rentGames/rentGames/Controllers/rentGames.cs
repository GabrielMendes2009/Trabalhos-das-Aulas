using Microsoft.AspNetCore.Mvc;
using rentGames.Models;

namespace rentGames.Controllers
{
    [ApiController]
    [Route("api/[controller]")] // Isso faz o camigo ser o controller usado, no caso: "rentGames"

    public class rentGames : Controller
    {
        // Uma lista estática simulando um banco de dados temporário
        private static List<Jogo> _jogos = new List<Jogo>
        {
            new Jogo {
                Id = 1, Nome = "Resident Evil Requiem", Consola = "Xbox Series X", Alugado = false
            },

            new Jogo {
                Id = 2, Nome = "Resident Evil 4 Remake", Consola = "Playstation 5 Pro", Alugado = true
            },

            new Jogo {
                Id = 3, Nome = "Persona 5 Royal", Consola = "Xbox Series S", Alugado = true
            },

            new Jogo {
                Id = 4, Nome = "Persona 4 Golden", Consola = "Playstation 4", Alugado = false
            },

            new Jogo {
                Id = 5, Nome = "GTA VI", Consola = "Xbox Series X", Alugado = true
            }

        };

        // GET: api/rentGames (retorna a lista de jogos)
        [HttpGet]
        public JsonResult GetJogos()
        {
            return new JsonResult(_jogos); 
        }

        // POST: api/rentGames (adiciona um novo jogo)
        [HttpPost]
        public JsonResult CriarJogo([FromBody] Jogo novoJogo)
        {
            // gera um id simples
            novoJogo.Id = _jogos.Count + 1;
            _jogos.Add(novoJogo);

            // retorna o jogo criado e o status de sucesso
            return new JsonResult(new { mensagem = "Jogo Adicionadooooo!!!", jogo = novoJogo });
        }
    }
}