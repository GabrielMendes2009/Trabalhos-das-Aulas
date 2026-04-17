print("Múltiplos de 5 que não são múltiplos de 3:\n")
total = 0
for num in range(1, 1001):
    if num % 5 == 0 and num % 3 != 0:
        print(str(num), end="  ")
        total = total + 1

        if total % 10 == 0:
            print()
print("\n\nTotal de números encontrados: " + str(total))
