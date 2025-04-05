
# Calculadora de Desconto Progressivo

# valor da compra
valor = float(input("Informe o valor da compra:"))

# mostrar percentual de desconto
if valor <= 100:
    desc = 0
elif valor <= 500:
    desc = 0.05
elif valor <= 1000:
    desc = 0.1
else:
    desc = 0.15

# Valor original da compra
print(f"Valor original da compra: R$ {valor:.2f}")

# Percentual de desconto aplicado
print(f"Percentual de desconto aplicado: {desc*100:0f}%")

# mostrar o valor do desconto
desc_valor = valor * desc
print(f"Valor do desconto: R$ {desc_valor:.2f}")

# mostrar o valor final com desconto
valor_final = valor - desc_valor
print(f"Valor final com desconto: R$ {valor_final:.2f}")
