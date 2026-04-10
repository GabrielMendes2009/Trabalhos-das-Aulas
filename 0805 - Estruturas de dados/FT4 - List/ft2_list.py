#Criar a Lista
marcas = ["Toyota", "Ford", "Honda", "Chevrolet", "Nissan"]

#Adicionar uma Marca
marcas.append("Volkswagen")

#Remover uma Marca
marcas.remove("Ford")

#Alterar uma Marca
marcas[3] = "Hyundai"

#Percorrer e Imprimir a Lista
for item in marcas:
    print(item)

print("------------------")

#Pesquisar uma Marca
pesquisar = input("Insira um nome de uma marca de carros: ")

if pesquisar in marcas:

    print(f"A marca {pesquisar} existe na lista")
else:

    print(f"A marca {pesquisar} não existe na lista")

print("------------------")

#Imprimir em Ordem Ascendente
marcas.sort(reverse = True)

for item in marcas:
    print(item)

print("------------------")

#Imprimir em Ordem Inversa
marcas.sort(reverse = False)

for item in marcas:
    print(item)