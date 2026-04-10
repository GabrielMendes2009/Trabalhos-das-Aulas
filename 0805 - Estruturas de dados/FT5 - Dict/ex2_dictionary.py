# Média de um aluno
aluno = {}
aluno["nome"] = input("Nome do aluno: ")
aluno["media"] = float(input("Média do aluno: "))
aluno["situacao"] = "Aprovado" if aluno["media"] >= 10 else "Reprovado"

print(f"{aluno['situacao']}")
print("\nDicionário do aluno:")
print(aluno)
