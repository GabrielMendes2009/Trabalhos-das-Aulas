prod = {"categoria": "eletrônico", "preco": 1500}

match prod:
    case {"categoria": "eletrônico", "preco": preco} if preco > 1000:
        print("Produto de Luxo")

    case {"categoria": "eletrônico"}:
        print("Produto Comum")

    case {"categoria": "alimento"}:
        print("Produto Alimentar")

    case _:
        print("Categoria Desconhecida")

