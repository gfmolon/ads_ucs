# M >= 15 anos 1.2+ salario
# F >= 10 anos 1.25+ salario
# outros todos bonus de 1000,00

# calcular o bonus de natal

sexo = input("Informe o sexo (M/F)").upper()
tempo_servico = int(input("Informe o tempo de serviço em anos"))
salario = float(input("Informe o Salário"))

if sexo == "M" and tempo_servico >= 15:
    bonus = (salario*1.2) - salario
    print(f"Bonus: R$ {bonus:.2f}")
elif sexo == "F" and tempo_servico >= 10:
    bonus = (salario*1.25) - salario
    print(f"Bonus: R$ {bonus:.2f}")
else:
    bonus = 1000
    print(f"Bonus: R$ {bonus:.2f}")