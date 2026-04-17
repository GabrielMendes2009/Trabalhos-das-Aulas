nota_a = float(input("Nota1 = "))
nota_b = float(input("Nota2 = "))
nota_c = float(input("Nota3 = "))
media_final = (nota_a * 2 + nota_b * 3 + nota_c * 5) / 10
print(f"Média: {media_final:.1f}")
print("Aprovado" if media_final >= 6 else "Reprovado")
