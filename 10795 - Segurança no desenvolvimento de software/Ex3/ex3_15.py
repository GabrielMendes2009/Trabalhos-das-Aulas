print("=== Códigos ASCII de 0 a 255 ===\n")
codigo = 0

while codigo <= 255:
    trecho = ""
    for col in range(20):
        if codigo > 255:
            break
        trecho = trecho + str(codigo) + ": " + chr(codigo) + "   "
        codigo = codigo + 1

    print(trecho)

    if codigo <= 255:
        input("\nPressione ENTER para ver os próximos 20 códigos...")

print("\nTabela ASCII concluída.")
