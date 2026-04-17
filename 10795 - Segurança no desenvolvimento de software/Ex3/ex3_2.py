qtd_pares = qtd_impares = 0
for _ in range(10):
    valor = int(input("Número: "))
    if valor % 2 == 0:
        qtd_pares += 1
    else:
        qtd_impares += 1
print(f"Pares: {qtd_pares}")
print(f"Ímpares: {qtd_impares}")
