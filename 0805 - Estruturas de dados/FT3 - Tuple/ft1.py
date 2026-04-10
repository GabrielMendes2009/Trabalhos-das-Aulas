# Importar numpy
import numpy as np

# Criar a Tupla notas que tem como função conter as notas dos alunos
notas = (7,8,5,10,6,9,4,7,8,6)
print (notas)

# Divisória
print ("-------------------------------------------------")

# Criar a variavel nota_maxima que tem a nota maxima do tuple e imprima essa variavel
nota_maxima = np.max(notas)
print (nota_maxima)

# Divisória
print ("-------------------------------------------------")

# Criar a variavel nota_minima que contem a nota minima do tuple e imprima essa variavel
nota_minima = np.min(notas)
print (nota_minima)

# Divisória
print ("-------------------------------------------------")

# Criar a variavel media que tem o valor da media das notas dos alunos
media = np.mean(notas)
print (media)

# Divisória
print ("-------------------------------------------------")

# Contar quantas notas são superior ou iguais à media das notas
cont = 0
for item in notas:
    if item >= media:
        cont += 1
print (cont)

# Divisória
print ("-------------------------------------------------")

# Criar um codigo que peça ao utilizador para inserir uma nota atraves do teclado, para verificar se essa nota está presente na tupla das notas
nota1 = int (input ("Insira uma nota, para verificar se essa nota está presente na tupla das notas: "))

existe = nota1 in notas
print (existe)

