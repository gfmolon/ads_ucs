lista = []
while True:
    nome = input("Informe o nome")
    preco = float(input("Informe o preço"))
    qt = int(input("Informe a quantidade"))

    produto = {
        "nome" : nome,
        "preco" : preco,
        "qt" : qt
    }

    lista.append(produto)

    continuar = input("Continuar?(S/N)").upper()
    if continuar == "S":
        continue
    elif continuar == "N":
        break
    else:
        continue

print("Lista de produtos:")
for i in lista:
    print(i)


