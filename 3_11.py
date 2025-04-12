preco = float(input("Informe o preço da mercadoria\n"))
desconto = float(input("Informe o percentual de desconto\n"))

# Calcula o multiplicador de desconto (ex.: 20% de desconto = 0.8)
multiplicador_desconto = 1 - (desconto / 100)

# Calcula o preço final com desconto
preco_com_desconto = preco * multiplicador_desconto

# Calcula o valor do desconto
valor_desconto = preco - preco_com_desconto

print(f"Preço: {preco:.2f}, Percentual de Desconto: {desconto:.2f}%, Valor final: {preco_com_desconto:.2f}, Desconto em valor: {valor_desconto:.2f}")