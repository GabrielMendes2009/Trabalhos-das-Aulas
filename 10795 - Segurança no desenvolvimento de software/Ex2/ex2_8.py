lista_notas = []

for idx in range(10):
    n = float(input(f"Nota do aluno {idx+1}: "))
    lista_notas.append(n)

media_turma = sum(lista_notas) / 10
qtd_acima = sum(1 for n in lista_notas if n >= media_turma)

print(f"Média: {media_turma:.2f}")
print(f"Alunos com nota igual ou acima da média: {qtd_acima}")
