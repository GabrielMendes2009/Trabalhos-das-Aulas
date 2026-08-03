using Microsoft.AspNetCore.Mvc;
using api.Services;
using Microsoft.AspNetCore.Authorization;

namespace api.Controllers
{
    // Endpoints que integram com o serviço externo (Imposter)
    [Route("api/[controller]")]
    [ApiController]
    [Authorize] // Protegido por JWT
    public class ExternalController : ControllerBase
    {
        private readonly ImposterService _imposterService;

        public ExternalController(ImposterService imposterService)
        {
            _imposterService = imposterService;
        }

        // GET - Consulta estoque simulado
        [HttpGet("inventory/{sku}")]
        public async Task<IActionResult> GetInventory(string sku)
        {
            var result = await _imposterService.GetInventoryAsync(sku);
            if (result == null) return StatusCode(503, "Serviço de inventário indisponível");
            return Ok(result);
        }

        // POST - Processa pagamento simulado
        [HttpPost("payment")]
        public async Task<IActionResult> ProcessPayment([FromBody] object paymentRequest)
        {
            var result = await _imposterService.ProcessPaymentAsync(paymentRequest);
            if (result == null) return BadRequest("Falha no processamento do pagamento");
            return Ok(result);
        }
    }
}
