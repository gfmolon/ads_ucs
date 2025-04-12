n1 = int(input("Informe o primeiro numero"))
n2 = int(input("Informe o segundo numero"))
n3 = int(input("Informe o terceiro numero"))

if n1>n2 and n1>n3:
    maior = n1
elif n2>n1 and n2>n3:
    maior = n2
else:
    maior = n3

if n1<n2 and n1<n3:
    menor = n1
elif n2<n1 and n2<n3:
    menor = n2
else:
    menor = n3

print(f"Maior: {maior}")
print(f"Menor: {menor}")