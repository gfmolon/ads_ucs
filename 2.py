codigo = int(input("Informe o código\n"))

if codigo > 0 and codigo < 5:

    a = float(input("Valor a:\n"))
    b = float(input("Valor b:\n"))
    c = float(input("Valor c:\n"))

    if a > 0 and b > 0 and c > 0:

        if codigo == 1:
            acao = a*b*c
            print(f"Resultado: {acao:.2f}")
        elif codigo == 2:
            acao = a+b+c
            print(f"Resultado: {acao:.2f}")
        elif codigo == 3:
            acao = a-b-c
            print(f"Resultado: {acao:.2f}")
        elif codigo == 4:
            acao = (a**3) + (b**3) + (c**3)
            print(f"Resultado: {acao:.2f}")    

    else:
        print("Erro: Número menor que 0 ou igual a 0. Tente novamente.")

else:
    print("Erro: Código inválido. Tente novamente.")