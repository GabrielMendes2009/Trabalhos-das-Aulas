pedido = {"tipo": "venda", "valor": 375}  

match pedido:
    case {"tipo": "compra", "valor": v}:
        print(f"Compra de {v}€")
    case {"tipo": "venda", "valor": v}:
        print(f"Venda de {v}€")
    case _:
        print("Pedido não encontrado")

