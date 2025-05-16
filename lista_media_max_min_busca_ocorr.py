lista = []
while True:
    n = input("Informe um número")

    if n == "0":
        break
    else:
        print(f"{n}")
        n = float(n)
        lista.append(n)

soma = 0
for i in lista:
    soma += i

media = soma / len(lista)

print(lista)
lista.sort()
print(lista)
print(f"Média: {media:.2f}")
print(f"Maior: {max(lista)}, Menor: {min(lista)}")

busca = float(input("Busque um número na lista"))

if lista.count(busca):
    print(f"{busca} aparece {lista.count(busca)} vezes na lista.")
