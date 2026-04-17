teto = int(input("Até que número quer verificar números perfeitos? "))
print("\nNúmeros perfeitos encontrados até " + str(teto) + ":")
total_perfeitos = 0
for num in range(1, teto + 1):
    soma_div = 0
    for d in range(1, num):
        if num % d == 0:
            soma_div = soma_div + d
    if soma_div == num:
        print(str(num) + " é um número perfeito!")
        total_perfeitos = total_perfeitos + 1
print("\nTotal de números perfeitos encontrados: " + str(total_perfeitos))
