valor_casa = float(input("Informe o valor da casa: "))
salario_comprador = float(input("Salário do comprador: "))
anos_pagando = int(input("Informe em quantos anos vai pagar a casa: "))

# Calcular a prestação mensal
meses = anos_pagando * 12
prestacao_mensal = valor_casa / meses

# Verificar se a prestação excede 30% do salário
limite_salario = salario_comprador * 0.3

if prestacao_mensal <= limite_salario:
    print("Aprovado")
else:
    print("Reprovado")