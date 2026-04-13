pedido = {"tipo": "venda", "valor": 375}  

match pedido:
    case {"tipo": "compra", "valor": valor}:
        print(f"Compra de {valor}€")

    case {"tipo": "venda", "valor": valor}:
        print(f"Venda de {valor}€")
        
    case _:
        print("Pedido não encontrado")

