total = 0

for pos in range(10):
    n = float(input(f"Nota {pos+1}: "))
    total += n

media = total / 10
print(f"Média: {media}")
