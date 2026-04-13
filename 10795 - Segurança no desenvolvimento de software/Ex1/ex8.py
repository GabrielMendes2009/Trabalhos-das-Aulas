operacao = input("Operação (soma, subtrai, multiplica, divide): ").strip().lower()
n1 = float(input("Número 1: "))
n2 = float(input("Número 2: "))

match operacao:
    case "soma":
        print(n1+n2)

    case "subtrai":
        print(n1-n2)

    case "multiplica":
        print(n1*n2)

    case "divide" if n2 != 0:
        print(n1/n2)

    case "divide":
        print("Erro: divisão por zero")

    case _:
        print("Operação Inválida")

