# Exercicio 1: Notas de alunos
alunos = {}
n = int(input("Quantos alunos deseja registar? "))

for i in range(n):
    nome = input(f"Nome do {i+1}º aluno: ")
    nota = float(input("Nota (0 a 20): "))
    alunos[nome] = nota

print("\nLista completa:", alunos)

media = sum(alunos.values()) / len(alunos)
print(f"Média das notas: {media:.2f}")

max_nota = max(alunos.values())
melhores = [nome for nome, nota in alunos.items() if nota == max_nota]
print("Aluno(s) com nota mais alta:", melhores)
