lista = []

while True:

    nome = input("Informe um nome")

    if nome == "fim":
        break

    lista.append(nome)

lista.sort()

for i in range(0, len(lista), 1):
    print(lista[i])

if lista.count("Gui") > 0:
    print(f"Gui apareceu {lista.count("Gui")} vezes")
