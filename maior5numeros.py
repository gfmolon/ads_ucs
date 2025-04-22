a = int(input("Informe um numero"))
b = int(input("Informe um numero"))
c = int(input("Informe um numero"))
d = int(input("Informe um numero"))
e = int(input("Informe um numero"))

maior = a
menor = a

if b > maior:
    maior = b
if c > maior:
    maior = c
if d > maior:
    maior = d
if e > maior:
    maior = e

if b < menor:
    menor = b
if c<menor:
    menor = c
if d<menor:
    menor = d
if e < menor:
    menor = e

print(f"Maior: {maior}")
print(f"Menor: {menor}")

