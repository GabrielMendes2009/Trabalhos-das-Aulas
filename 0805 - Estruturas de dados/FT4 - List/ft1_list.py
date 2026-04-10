# Criar a Lista
lista_de_numeros = [5, 10, 15, 20, 25]

for item in lista_de_numeros:
    print(item)

print("------------------")

# Adicionar ao final da lista, o valor 30
lista_de_numeros.append (30)

# Remover o número 10 da lista
lista_de_numeros.remove (10)

# Alterar o segundo número da lista (o número no índice 1) para 12
lista_de_numeros.insert (1, 12)

# Imprimir no ecrã o primeiro e o último número da lista
print(lista_de_numeros[0])
print(lista_de_numeros[-1])

print("------------------")

# Utilize um loop for para imprimir todos os números da lista
for item in lista_de_numeros:
    print(item)

print("------------------")

# Adicionar o indice 2 com o indice 3. A saida formata para o ecran será do tipo: A soma do “indice2” com o “indice3” é “indice2+indice3”
sum_elementos = lista_de_numeros [2] + lista_de_numeros [3]
print(f"A soma do {lista_de_numeros[2]} com o {lista_de_numeros[3]} é {sum_elementos}")

print("------------------")

# Calcular a Soma: Calcule e imprima a soma de todos os números na lista
sum_de_todos_elementos = sum (lista_de_numeros)
print(sum_de_todos_elementos)

print("------------------")

# Encontrar o Número Máximo: Encontre e imprima o maior número na lista
print(max (lista_de_numeros))

print("------------------")

# Ordenar a Lista: Ordene a lista em ordem crescente e imprima a lista ordenada
lista_de_numeros.sort(reverse = True)

for item in lista_de_numeros:
    print(item)

print("------------------")

# Ordenar a Lista: Ordene a lista em ordem decrescente e imprima a lista ordenada
lista_de_numeros.sort(reverse = False)

for item in lista_de_numeros:
    print(item)