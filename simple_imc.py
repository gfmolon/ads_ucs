nome = input("Informe o nome")
altura = float(input("Informe a altura em metros"))
peso = float(input("Informe o peso em kg"))

imc = peso / (altura ** 2)

if imc <= 18.5:
    print(f"{nome} tem IMC de {imc:.2f} - Abaixo do peso")
elif imc <= 24.9:
    print(f"{nome} tem IMC de {imc:.2f} - Peso normal")
elif imc <= 29.9:
    print(f"{nome} tem IMC de {imc:.2f} - Sobrepeso")
else:
    print(f"{nome} tem IMC de {imc:.2f} - Obesidade")

