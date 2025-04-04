#Crie um programa que pergunte a idade do usuário e determine se ele pode assistir 
#a um filme com base nas seguintes regras:

#Menores de 13 anos: "Você só pode assistir filmes livres para todos os públicos."
#Entre 13 e 17 anos: "Você pode assistir filmes com classificação até 16 anos."
#18 anos ou mais: "Você pode assistir qualquer filme."
#Se o usuário digitar uma idade negativa ou inválida (como letras), exiba: "Idade inválida, por favor insira um número positivo."


i = input("Qual sua idade\n")

try:
	i = int(i)

	if i < 0:
		print("Idade negativa. Por favor, coloque uma idade positiva.")
	else:
		if i >= 0 and i < 13:
			print("Menores de 13 anos: Você só pode assistir filmes para todos os públicos.\n")
		elif i >= 13 and i <=17:
			print("Entre 13 e 17 anos: Você pode assitir filmes com classificação até 17 anos.")
		else:
			print("Você pode assistir qualquer filme")
			


except:
	print("Idade inválida. Deve ser um número positivo.\n")


