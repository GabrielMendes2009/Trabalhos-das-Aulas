# Exercicio 2: Automovel
automoveis = {}

def adicionar():
    matricula = input("Matrícula: ")
    if matricula in automoveis:
        print("Matrícula já registrada!")
        return
    marca = input("Marca: ")
    modelo = input("Modelo: ")
    ano = int(input("Ano: "))
    preco = float(input("Preço: "))
    automoveis[matricula] = {"marca": marca, "modelo": modelo, "ano": ano, "preco": preco}

def pesquisar():
    matricula = input("Matrícula para pesquisar: ")
    if matricula in automoveis:
        print(automoveis[matricula])
    else:
        print("Não encontrado.")

def apagar():
    matricula = input("Matrícula para apagar: ")
    if matricula in automoveis:
        del automoveis[matricula]
        print("Automóvel removido.")
    else:
        print("Não encontrado.")

def alterar():
    matricula = input("Matrícula para alterar: ")
    if matricula in automoveis:
        marca = input("Nova marca: ")
        modelo = input("Novo modelo: ")
        ano = int(input("Novo ano: "))
        preco = float(input("Novo preço: "))
        automoveis[matricula] = {"marca": marca, "modelo": modelo, "ano": ano, "preco": preco}
    else:
        print("Não encontrado.")

def listar():
    if not automoveis:
        print("Nenhum automóvel registado.")
    for mat, dados in automoveis.items():
        print(f"{mat} -> {dados}")

while True:
    print("\nMenu:")
    print("1) Adicionar automóvel")
    print("2) Pesquisar automóvel")
    print("3) Apagar automóvel")
    print("4) Alterar dados")
    print("5) Listar automóveis")
    print("6) Sair")
    op = input("Opção: ")
    if op == "1":
        adicionar()
    elif op == "2":
        pesquisar()
    elif op == "3":
        apagar()
    elif op == "4":
        alterar()
    elif op == "5":
        listar()
    elif op == "6":
        break
    else:
        print("Opção inválida!")

