nota1 = float(input("Informe uma nota 1"))
nota2 = float(input("Informe uma nota 2"))
nota3 = float(input("Informe uma nota 3"))
nota4 = float(input("Informe uma nota 4"))

#descobrir qual a maior e a menor nota

maior = nota1
menor = nota1

if nota2 > maior:
    maior = nota2
if nota3 > maior:
    maior = nota3
if nota4 > maior:
    maior = nota4

if nota2< menor:
    menor = nota2
if nota3<menor:
    menor = nota3
if nota4 < menor:
    menor = nota4

print(f"Resultado maior: {maior:.2f}")
print(f"Resultado menor: {menor:.2f}")

