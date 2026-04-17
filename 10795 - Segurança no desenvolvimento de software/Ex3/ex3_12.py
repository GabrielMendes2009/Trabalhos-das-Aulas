n = int(input("Introduza um número inteiro positivo: "))
if n <= 1:
    print("Por favor, introduza um número maior que 1.")
else:
    resultado_soma = 0
    resultado_sub = 0
    resultado_mult = 1
    total_iter = 0
    for val in range(1, n):
        resultado_soma = resultado_soma + val
        resultado_sub = resultado_sub - val
        resultado_mult = resultado_mult * val
        total_iter = total_iter + 1
    print("\n=== Resultados para o número " + str(n) + " ===")
    print("Soma: " + str(resultado_soma))
    print("Subtração: " + str(resultado_sub))
    print("Multiplicação: " + str(resultado_mult))
    print("Número de operações realizadas: " + str(total_iter))
