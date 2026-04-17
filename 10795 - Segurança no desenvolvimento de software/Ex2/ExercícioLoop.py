lista_nums = list(map(int, input("Digite 10 números separados por vírgula: ").split(',')))

qtd_pares = sum(1 for x in lista_nums if x % 2 == 0)
qtd_impares = len(lista_nums) - qtd_pares

print(f"Pares: {qtd_pares}")
print(f"Ímpares: {qtd_impares}")
