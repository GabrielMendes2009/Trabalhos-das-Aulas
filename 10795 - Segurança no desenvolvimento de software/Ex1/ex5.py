msg = input("Digite uma mensagem: ").strip().lower()

match msg:
    case "olá" | "bom dia":
        print("Saudação")

    case msg if msg.endswith("?"):
        print("Pergunta")

    case msg if "tchau" in msg or "adeus" in msg:
        print("Despedida")

    case _:
        print("Lalau")

