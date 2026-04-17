entrada = int(input("Digite um número: "))
qtd_divisores = sum(1 for d in range(1, entrada + 1) if entrada % d == 0)
print(f"O número {entrada} tem {qtd_divisores} divisores.")
