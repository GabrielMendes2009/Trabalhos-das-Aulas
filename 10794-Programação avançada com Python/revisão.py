import math
#Faça uma função que mostre todos os num int de forma inversa entre 2 valores recebidos

val1 = int(input("Digite o primeiro valor: "))
val2 = int(input("Digite o segundo valor: "))

def numeros(v1, v2):
    inicio = min(v1, v2)
    fim = max(v1, v2)
    
    for num in range(inicio + 1, fim):
        print(num)

    print("\nAgora em ordem inversa:")
    for num in range(fim - 1, inicio, -1):
        print(num)

numeros(val1, val2)

print("\n-------------------------------------------------------------------\n")

# Crie uma função para calcular a formula resolvente (eq quadrática) e mostre o resultado

def formula_resolvente(a, b, c):

    de = (b ** 2) - (4 * a * c)
    
    if de < 0:
        return "Delta negativo"
    
    x1 = (-b + (de ** 0.5)) / (2 * a)
    x2 = (-b - (de ** 0.5)) / (2 * a)
    
    return x1, x2

print("Vamos resolver ax² + bx + c = 0")

a = float(input("Digite o valor de a: "))
b = float(input("Digite o valor de b: "))
c = float(input("Digite o valor de c: "))

resultado = formula_resolvente(a, b, c)
print("Resultado:", resultado)

# Peça numeros ao ultilizador até este inserir -1 adicione esses numeros em uma lista e mostre a lista em ordem inversa

numeros = []
n1 = int(input("Digite um número (-1 para sair): "))
while n1 != -1:
    numeros.append(n1)
    n1 = int(input("Digite um número (-1 para sair): "))

print("Lista em ordem inversa:")
for num in reversed(numeros):
    print(num)


# peça números ao ultilizador até este inserir -1 adicione esses números a uma collection, garanta que não há valores repetidos e mostre a collection

nums = set()
n2 = int(input("Digite um número (-1 para sair): "))
while n2 != -1:
    nums.add(n2)
    n2 = int(input("Digite um número (-1 para sair): "))

print("Collection:")
for num in nums:
    print(num)


#Cria uma classe carro define pelo menos 2 metodos e 2 propriedades

class Carro:
    def __init__(self, marca, modelo):
        self.marca = marca
        self.modelo = modelo

    def ligar(self):
        print(f"O carro {self.marca} {self.modelo} está ligado.")

    def desligar(self):
        print(f"O carro {self.marca} {self.modelo} está desligado.")

carro1 = Carro("Audi", "R8 V10")
carro1.ligar()
carro1.desligar()

