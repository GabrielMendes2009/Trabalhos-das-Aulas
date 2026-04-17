saldo_conta = float(input("Saldo inicial: "))
valor_cheque = float(input("Valor de cheque: "))

if valor_cheque <= saldo_conta:
    saldo_novo = saldo_conta - valor_cheque
    print(f"Cheque descontado\nSaldo: {saldo_novo}")
else:
    print("Cheque não pode ser Descontado")
