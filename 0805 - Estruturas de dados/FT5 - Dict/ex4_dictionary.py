# Registo e Atualização de Utentes
from datetime import datetime

utentes = []
n = int(input("Quantos utentes deseja registar? "))

for i in range(n):
    utente = {}
    utente["nome"] = input(f"Nome do {i+1}º utente: ")
    ano = int(input("Ano de nascimento: "))
    utente["idade"] = datetime.now().year - ano
    utente["info"] = input("Informação adicional: ")
    utentes.append(utente)

print("\nLista de utentes:")
for u in utentes:
    print(f"Nome: {u['nome']}, Idade: {u['idade']}, Informação: {u['info']}")

if len(utentes) >= 2:
    nova_info = input("\nAtualize informação do 2º utente: ")
    utentes[1]["info"] = nova_info

print("\nLista atualizada:")
for u in utentes:
    print(f"Nome: {u['nome']}, Idade: {u['idade']}, Informação: {u['info']}")

