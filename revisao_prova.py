valor_hora = int(input("Valor Hora:"))
he = int(input("Hora de Entrada:"))
hs = int(input("Hora de Saída:"))

if hs>=he:
    duracao = hs-he
else:
    duracao = 24-he+hs

print(f"Duração: {duracao} horas")    
    
if duracao < 6:
    valor_total = valor_hora * duracao
    print(f"Valor a receber: {valor_total:.2f}")

elif duracao <=9:  
    valor_total = (6*valor_hora) + (duracao-6)*valor_hora*1.3 
    print(f"Valor a receber: {valor_total:.2f}")

elif duracao >= 10:
    valor_total = (6*valor_hora) + 3*valor_hora*1.3 + (duracao-9)*valor_hora*1.5

    print(f"Valor a receber: {valor_total:.2f}")

