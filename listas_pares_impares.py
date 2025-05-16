x = 0
n = 0
lista_pares = []
lista_impares = []
while n != "x":
    n = input("Informe um número")

    if n == "x":
        break
    else:
        if int(n) % 2 == 0:
            print("Par")
            lista_pares.append(n)
        else:
            print("Ímpar")
            lista_impares.append(n)


print("Você digitou:")
print(f"{len(lista_pares)} - Pares: {lista_pares}")
print(f"{len(lista_impares)} - Ímpares: {lista_impares}")
