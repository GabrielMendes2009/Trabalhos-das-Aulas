while True:
    entrada = int(input("Digite um número entre 1 e 100: "))
    
    if 1 <= entrada <= 100:
        print("Número válido!")
        break
    else:
        print("Valor fora do intervalo. Tente novamente.")
