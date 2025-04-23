
while True:
    n = int(input("Informe um número entre 1 e 10"))
    for x in range (1,11):
        print(f"{n} x {x} = {n*x}")
    resp = input("Deseja ver outra tabuada ou finalizar?").upper()
    if resp != "S":
        print("Programa encerrado.")
        break


