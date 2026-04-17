valores = [int(input(f"num{i+1} = ")) for i in range(3)]
valores_ord = sorted(valores)

print(f"Crescente: {valores_ord[0]}, {valores_ord[1]}, {valores_ord[2]}")
print(f"Decrescente: {valores_ord[2]}, {valores_ord[1]}, {valores_ord[0]}")
