nota = int(input("Insira a nota (0-100): "))

match nota:
    case nota if nota >= 90:
        print("Excelente")

    case nota if nota >= 70:
        print("Bom")

    case nota if nota >= 50:
        print("Suficiente")

    case nota if nota >= 0:
        print("Insuficiente")
        
    case _:
        print("Nota inválida")

