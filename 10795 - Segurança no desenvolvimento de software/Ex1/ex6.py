server = {"status": "ok", "tempResposta": 350}

match server:
    case {"status": "ok", "tempResposta": tempo} if tempo > 200:
        print("Servidor Lento")

    case {"status": "ok"}:
        print("Servidor Ativo")

    case {"status": "erro"}:
        print("Servidor Indisponível")

    case _:
        print("Estado Desconhecido")

