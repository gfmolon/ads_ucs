ano_nascimento = int(input("Informe o ano de nascimento: "))

idade = 2025 - ano_nascimento

print(f"Idade: {idade} anos")

if idade == 18:
    print("Situação: Deve se alistar ao serviço militar este ano.")
elif idade < 18:
    anos_faltam = 18 - idade
    print(f"Situação: Ainda não precisa se alistar. Faltam {anos_faltam} anos para o alistamento obrigatório.")
else:  
    anos_atraso = idade - 18
    print(f"Situação: Já passou o prazo do alistamento. Está {anos_atraso} anos atrasado.")