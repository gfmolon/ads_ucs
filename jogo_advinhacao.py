import random
from datetime import datetime

logs = []


def jogada_humano() -> int:
    jogada = 0
    while jogada > 5 or jogada < 1:
        jogada = int(input("Um número de 1 a 5"))
    return jogada


def jogada_computador() -> int:
    return random.randint(1, 5)


def dif_jogada(h: int, c: int) -> str:
    if h > c:
        dif = h - c
    else:
        dif = c - h

    if dif == 1:
        print("Bateu na trave!! por apenas 1 de diferença!")
    elif dif == 2:
        print("2 de Diferença!! Ta quase..")
    elif dif == 3:
        print("3 de Diferença!! Vamos lá.")
    else:
        print("Falta de sorte!")


def log_add(h: int, c: int, lista: list) -> str:
    log = f"Humano: {h} | Máquina: {c} | {datetime.now()} "
    lista.append(log)


def log_list(lista: list) -> str:
    print("Histórico de tentativas:")
    for log in lista:
        print(log)


while True:

    jogada_h = jogada_humano()
    print(f"Você: {jogada_h}")

    jogada_c = jogada_computador()
    print(f"Computador: {jogada_c}")

    log_add(h=jogada_h, c=jogada_c, lista=logs)

    if jogada_h != jogada_c:
        dif_jogada(h=jogada_h, c=jogada_c)

    if jogada_h == jogada_c:
        print("Match!! Jogo Encerrado!")
        log_list(logs)
        break
    else:
        continue
