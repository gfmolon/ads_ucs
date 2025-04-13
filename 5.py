ano_nasc_atleta = int(input("Informe seu ano de nascimento: "))

idade = 2025 - ano_nasc_atleta

if idade > 20:
    print("Categoria: Master")
elif idade == 20:
    print("Categoria: Sênior")
elif idade >= 15:  
    print("Categoria: Junior")
elif idade >= 10:  
    print("Categoria: Infantil")
else: 
    print("Categoria: Mirim")