lista_primos = []
candidato = 2
while len(lista_primos) < 10:
    if all(candidato % d != 0 for d in range(2, int(candidato**0.5) + 1)):
        lista_primos.append(candidato)
    candidato += 1
print(lista_primos)
