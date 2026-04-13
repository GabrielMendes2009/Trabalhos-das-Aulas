dia = input("Digite o dia da semana: ").strip().lower()

match dia:
    case "segunda" | "terca" | "quarta" | "quinta" | "sexta":
        print("Dia útil")
    
    case "sabado" | "domingo":
        print("Fim de Semana")
    
    case _:
        print("Dia incorreto")
