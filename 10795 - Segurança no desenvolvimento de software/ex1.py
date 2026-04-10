# 1. Tipo de dia

dia = input("Digite o dia da semana: ").strip().lower()

match dia:
    case "segunda" | "terça" | "terca" | "quarta" | "quinta" | "sexta":
        print("Dia útil")
    case "sábado" | "domingo":
        print("Fim de semana")
    case _:
        print("Dia inválido")
