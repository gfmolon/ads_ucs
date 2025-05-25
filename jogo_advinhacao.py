import random


def jogada_humano() -> int:
    jogada = 0
    while jogada > 5 or jogada < 1:
        jogada = int(input("Um número de 1 a 5"))
    return jogada


def jogada_computador() -> int:
    return random.randint(1, 5)


while True:

    jogada_h = jogada_humano()
    print(f"Você: {jogada_h}")

    jogada_c = jogada_computador()
    print(f"Computador: {jogada_c}")

    if jogada_h == jogada_c:
        print("Match!! Jogo Encerrado!")
        break
    else:
        continue
