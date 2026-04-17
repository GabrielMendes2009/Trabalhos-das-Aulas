cliente = input("Nome do cliente: ")
valor_compra = float(input("Valor da compra: "))

if valor_compra <= 200:
    perc_desconto = valor_compra * 0.10
elif valor_compra <= 500:
    perc_desconto = valor_compra * 0.15
else:
    perc_desconto = valor_compra * 0.20

valor_final = valor_compra - perc_desconto

print(f"Nome: {cliente}")
print(f"Compra: {valor_compra}€")
print(f"Desconto: {perc_desconto}€")
print(f"Total a pagar: {valor_final}€")
