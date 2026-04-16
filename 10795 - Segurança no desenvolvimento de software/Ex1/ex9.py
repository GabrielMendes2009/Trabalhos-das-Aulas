
def pReq(r):
    match r:
        case {"metodo": "GET", "conteudo": _}:
            return "Requisição get recebida"
        case {"metodo": "POST", "conteudo": c} if c:
            return "Requisição post está com dados válidos"
        case {"metodo": "POST", "conteudo": ""}:
            return "Requisição post sem dados"
        case _:
            return "Método não conhecido"

print(pReq({"metodo": "POST", "conteudo": ""}))

