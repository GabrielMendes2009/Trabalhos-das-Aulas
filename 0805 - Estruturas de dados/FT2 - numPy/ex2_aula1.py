#import numpy
import numpy as np

# Criar o array com 20 números inteiros aleatórios 10-50
arr_np = np.random.randint(10, 51, 20)

# Qual o valor mínimo do meu array?
print("Valor mínimo do meu array:", np.min(arr_np), "\n")

# Qual o valor máximo do meu array?
print("Valor máximo do meu array:", np.max(arr_np), "\n")

# Qual a média dos elementos?
print("Média dos Elementos:", np.mean(arr_np), "\n")

# Imprimir o tamanho do array
print("Tamanho do Array:", arr_np.size, "\n")

# Imprimir o array
print(arr_np)

# Saber qual o tipo de variável
print(type(arr_np))

