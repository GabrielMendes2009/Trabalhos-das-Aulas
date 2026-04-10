# Registo de Códigos Postais
registos = []   #lista principal

for i in range(3):
    registo = {}   #dict temporário
    registo["localidade"] = input(f"Localidade {i+1}: ")
    registo["morada"] = input(f"Morada {i+1}: ")
    registo["cp4"] = input(f"CP4 {i+1}: ")
    registo["cp3"] = input(f"CP3 {i+1}: ")
    registos.append(registo)   #adicionando o dict à lista

print("\nLista completa:", registos)

print("\nRegistos formatados:")
for r in registos:
    print(f"{r['localidade']} | {r['morada']} | {r['cp4']}-{r['cp3']}")
