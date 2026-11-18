import re as reg

# Validações, substituições e procura de qualquer tipo de texto

# Padrões
# "ABC" ---- > procurar o padrão ABC no texto
# [A-L] ---- > procurar o padrão de A a L no texto
# *.mp3 ---- > procurar o padrão de tudo que acabe em .mp3 no texto

# funções
# re.search() -- > procura padrao em qualquer parte do texto
# re.match() -- > procura do inico da string
# re.findall() -- > devolve todas as ocorrências
# re.split() -- > divide a string em partes por padrao

padraoemail=r"^[\w\.-]+@[\w]+\.\w+$"
# ^ -> início da string
# [\w\.-]+ -> letras, números, underscore, ponto ou hífen
# @ -> arroba
# \.\w+ -> ponto seguido de letras (ex: .com, .pt)
# $ -> fim da string

padrao = "Python"
Texto = "Lalau"
email = "atec@atec.pt"

print(reg.search(padrao, Texto))
print(Texto[23])
print(Texto[28])
print(reg.match(padrao, Texto))
print("Email: ")
print(reg.search(padraoemail, Texto))
print(reg.match(padraoemail, Texto))


