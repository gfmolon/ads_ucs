#Aumento de salário

salario = float(input("Informe o valor do salário\n"))
aumento = float(input("Informe o % do aumento\n"))

aumento = 1*(aumento/100)

reajuste = salario*aumento

print(f"Salário inicial: {salario:.2f}\nReajuste:{reajuste:.2f}\n")
print(f"Novo salário: {salario+reajuste:.2f}")