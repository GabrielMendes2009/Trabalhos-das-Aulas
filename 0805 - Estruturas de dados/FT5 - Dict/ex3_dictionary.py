# Jogo de dados
import random

resultados = {}
for i in range(1, 5):
    resultados[f"Jogador {i}"] = random.randint(1, 6)

ordenados = dict(sorted(resultados.items(), key=lambda x: x[1], reverse=True))

print("Resultados dos jogadores:")
for j, v in ordenados.items():
    print(f"{j} tirou {v}")

