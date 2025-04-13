cod_item = int(input("Informe o código do item\n"))
quant_item = int(input("Informe a quantidade do item\n"))

if cod_item >= 100 and cod_item <= 105:
    
    if cod_item == 100:
        preco_item = 10
    elif cod_item == 101:
        preco_item = 18
    elif cod_item == 102:
        preco_item = 20
    elif cod_item == 103:
        preco_item = 5
    elif cod_item == 104:
        preco_item = 15
    elif cod_item == 105:
        preco_item = 4

    valor = preco_item * quant_item
    print(f"Valor a ser pago: R$ {valor:.2f}")

else:
    print("Erro: Código do produto não reconhecido.")
