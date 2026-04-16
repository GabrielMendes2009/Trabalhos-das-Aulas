
def game(p1, p2):
    match (p1, p2):
        case (a, b) if a == b:
            return "Empate"
        case ("tesoura", "papel"), ("pedra", "tesoura") , ("papel", "pedra"):
            return "Player 1 Venceu!!!!!!!!!!"
        case _:
            return "Player 2 Venceu!!!!!!!!!!!"

print(game("pedra", "tesoura"))
