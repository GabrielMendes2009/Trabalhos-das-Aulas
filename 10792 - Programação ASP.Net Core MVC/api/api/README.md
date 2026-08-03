# Video Games API Avançada - .NET 8

Esta é uma API para gestão de videojogos
## Como Executar

### 1. Iniciar o Imposter (Mountebank)
```bash
npm install -g mountebank
mb --configfile imposters.json
```

### 2. Executar a API
```bash
dotnet run
```
Acesse o Swagger em: `http://localhost:5006/swagger`

## Fluxo de Teste
1. Use `POST /api/auth/register` para criar um utilizador.
2. Use `POST /api/auth/login` para obter o Token JWT.
3. Clique no botão **Authorize** no Swagger e insira seu Token JWT.
4. Teste os endpoints de `Games`, `External` e `Studios`.
