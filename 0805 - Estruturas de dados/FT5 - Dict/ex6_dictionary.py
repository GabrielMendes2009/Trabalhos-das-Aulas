# Registo de Pessoas com Validação de Dados
pessoas = []

while True:
    pessoa = {}
    pessoa["nome"] = input("Nome: ")
    sexo = input("Sexo (M/F): ").strip().upper()[0]
    while sexo not in "MF":
        sexo = input("Sexo inválido. Digite (M/F): ").strip().upper()[0]
    pessoa["sexo"] = sexo
    pessoa["idade"] = int(input("Idade: "))
    pessoas.append(pessoa.copy())

    continuar = input("Quer continuar? (S/N): ").strip().upper()[0]
    if continuar == "N":
        break

print("\nLista final:", pessoas)

# Desafio extra
print(f"\nTotal de pessoas registadas: {len(pessoas)}")
media = sum(p["idade"] for p in pessoas) / len(pessoas)
print(f"Média de idades: {media:.2f}")
mulheres = [p["nome"] for p in pessoas if p["sexo"] == "F"]
print("Mulheres registadas:", mulheres)
