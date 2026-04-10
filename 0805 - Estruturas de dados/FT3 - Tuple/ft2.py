# Importar numpy
import numpy as np

# Criar a tupla alunos que tem como função conter o nome dos alunos
alunos = ("Ana","Carla","Bruno","Eduarda","Daniel","Gabriela","Felipe","Henrique")
print(alunos)

# Divisória
print ("-------------------------------------------------")

# Criar a variavel total_alunos que tem a quantidade de alunos
total_alunos = len(alunos)
print (total_alunos)

# Divisória
print ("-------------------------------------------------")

# Criar o codigo, para pedir ao utilizador que introduza um nome de um aluno a verificar se existe no tuple
perg1 = input ("introduza um nome de um aluno para verificar se existe no tuple: ")

existe = perg1 in alunos
print (existe)

# Divisória
print ("-------------------------------------------------")

# Criar o codigo que mostre o nome do primeiro aluno
print (alunos[0])

# Divisória
print ("-------------------------------------------------")

# Criar o codigo que mostre o nome do ultimo aluno
print (alunos[7])

# Divisória
print ("-------------------------------------------------")

# Mostrar qual a posição que ocupa no tuplo um determinado aluno inserido pelo utilizador
perg2 = input("Insira um nome de um aluno: ")

posic = alunos.index(perg2)
print(posic)

# Divisória
print ("-------------------------------------------------")

# Utilizar o metodo sort(), no tuple alunos. Escreva a sua análize ao resultado
alunos_ordenados = tuple(sorted(alunos))
print (alunos_ordenados)
