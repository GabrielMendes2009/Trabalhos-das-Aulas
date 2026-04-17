acumulador = 0
cont = 0

print("Introduza 30 números pares entre 1 e 50:")
while cont < 30:
    valor = int(input("Número " + str(cont + 1) + ": "))
    if valor >= 1 and valor <= 50 and valor % 2 == 0:
        acumulador = acumulador + valor
        cont = cont + 1
    else:
        print("Número inválido! Deve ser par e estar entre 1 e 50.")

media = acumulador / 30

print("\nMédia dos 30 números pares: " + str(round(media, 2)))
