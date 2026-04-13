
valor = [35, 53, 12]

match valor:
    case int():
        print("Número Inteiro")

    case float():
        print("Número Decimal")

    case str() if is_num(valor):
        print("String Numérica")

    case str():
        print("String Textual")

    case list() | tuple():
        print("Lista")
        
    case _:
        print("Tipo desconhecido")



def is_num(stringg):
    try:
        float(stringg)
        return 1
    except ValueError:
        return 0