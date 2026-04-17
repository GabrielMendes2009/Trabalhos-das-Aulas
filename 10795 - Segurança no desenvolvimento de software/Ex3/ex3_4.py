def verifica_primo(valor):
    if valor <= 1:
        return False
    for divisor in range(2, int(valor**0.5) + 1):
        if valor % divisor == 0:
            return False
    return True

entrada = int(input("Digite um número: "))
print("É primo" if verifica_primo(entrada) else "Não é primo")
