atual, proximo = 1, 1
print(atual, end=" ")
for _ in range(59):
    atual, proximo = proximo, atual + proximo
    print(proximo, end=" ")
