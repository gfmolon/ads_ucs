i = int(input("Digite um valor inteiro de 1 a 3"))

if i > 0 and i <= 3:
                
    a = float(input("Valor 1"))
    b = float(input("Valor 2"))
    c = float(input("Valor 3"))
    maior = 0
    menor = 0
    meio = 0

    if a>=b and a>=c:
        maior = a
        if b>=c:
            meio = b
            menor = c
    elif b>=a and b>=c:
        maior = b
        if a>=c:
            meio = a
            menor = c
        else:
            meio = c
            menor = a
    else: 
        maior = c
        if a >= b:
            meio = a
            menor = b
        else:
            menor = a
            meio = b
            
    if i == 1:
        print(f"{menor} {meio} {maior}")
    elif i ==2:
        print(f"{maior} {meio} {menor}")
    elif i ==3:
        print(f"{menor} {maior} {meio}")

else:
    print("Digite um valor inteiro, positivo de 1 a 3..")