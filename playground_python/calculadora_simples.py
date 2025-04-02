
# calculadora simples

print("Informe os dois números:\n");
n1 = float(input("numero1:\n"))
n2 = float(input("numero2:\n"))

if n1 is not None and n2 is not None:
    print("Informe uma opção:\n")
    print("--------------------")
    print("1 - SOMA")
    print("2 - MULTIPLICAÇÃO")
    print("3 - DIVISÃO")
    print("--------------------")

    op = int(input("Informe o número da opção:\n"))

    if op == 1:
        print(f"{n1} + {n2} = {n1+n2}")
    elif op == 2:
        print(f"{n1} * {n2} = {n1 * n2}")
    elif op == 3:
        if n2 == 0:
            print("Divisão por 0 não permitida.")
        else:
            print(f"{n1} / {n2} = {n1/n2}")
    else:
        print("Opção Inválida. Tente novamente.\n")


