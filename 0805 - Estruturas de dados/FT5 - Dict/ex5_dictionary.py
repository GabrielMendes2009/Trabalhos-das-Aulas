# Estatísticas de Golos de um Jogador
jogador = {}
jogador["nome"] = input("Nome do jogador: ")
n_partidas = int(input(f"Quantas partidas o {jogador['nome']} fez? "))

golos = []
for i in range(n_partidas):
    g = int(input(f"Quantos golos no {i+1}º jogo? "))
    golos.append(g)

jogador["golos"] = golos
jogador["total_de_golos"] = sum(golos)

print("\nEstrutura do jogador:", jogador)
print("Lista de golos:", golos)
print(f"O jogador {jogador['nome']} fez {n_partidas} partidas e marcou {jogador['total_de_golos']} golos.")

for i, g in enumerate(golos, start=1):
    print(f"No {i}º jogo fez {g} golos.")

