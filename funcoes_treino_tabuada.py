def captar_dados() -> int:
    print("Informe um número para gerar a tabuada:")
    numero = int(input())
    return numero


def gerar_tabuada(n: int) -> None:
    if n:
        for i in range(1, 11):
            print(f"{n} * {i} = {n * i}")


while True:
    gerar_tabuada(captar_dados())
    out = input("sair? (S/N)").upper()

    if out == "S":
        print("Fim do programa!")
        break
    else:
        continue
