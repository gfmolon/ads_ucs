salario = float(input("Informe o salário:\n"))

if salario > 1250:
    aumento = 1.1*salario - salario
elif salario <= 1250:
    aumento = 1.15*salario - salario

print(f"Salário: R$ {salario:.2f}, aumento: {aumento:.2f}")