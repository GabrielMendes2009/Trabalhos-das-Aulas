# importar o array
import array

# Criar um array de inteiros com os seguintes números: 5, 10, 15, 20, 25
arr = array.array('i', [5, 10, 15, 20, 25])

# Aceder e a imprimir o valor do primeiro e do último elemento do array
print (arr[0], arr[4])

# Adicionar uma linha divisória
print ("")

# Modificar o terceiro elemento do array, substituindo-o por 30
arr[2] = 30

# Iterar sobre o array usando um loop for e imprima cada elemento em uma nova linha
for item in arr:
    print(item)

# Adicionar uma linha divisória
print ("")

# Adicionar um novo número ao final do array: 35
arr.append(35)

# Imprimir o array completo após a modificação
for item in arr:
    print(item)

