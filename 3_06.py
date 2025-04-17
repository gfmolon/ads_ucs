valor = float(input("Informe o valor: "))
opcao = int(input("Informe a opção de pagamento:\n1- À vista dinheiro\n2- À vista cartão\n3- 2x cartão\n4- 3x ou mais cartão\n"))

while opcao < 1 or opcao > 4:
    print("Opção inválida! Escolha entre 1 e 4.")
    opcao = int(input("Informe a opção de pagamento:\n1- À vista dinheiro\n2- À vista cartão\n3- 2x cartão\n4- 3x ou mais cartão\n"))

while valor < 0:
    print("Valor inválido! Informe um valor positivo.")
    valor = float(input("Informe o valor: "))

if opcao == 1:
    desconto = 0.9 
elif opcao == 2:
    desconto = 0.95
elif opcao == 3:
    desconto = 1.0
elif opcao == 4:
    desconto = 1.2

preco = valor * desconto

print(f"Valor original: R${valor:.2f}")
print(f"Valor com ajuste: R${preco:.2f}")


