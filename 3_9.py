#calculo total em segundos

dias = int(input("Informe os Dias:"))
horas = int(input("Informe as horas"))
minutos = int(input("Quantidade de minutos"))
segundos = int(input("Informe quantidade em segundos"))

dia_em_seg = 1 * 24 * 60 * 60  
horas_em_seg = 1 * 60 * 60
minutos_em_seg = 1 * 60
segundos = segundos

total_segundos = dias*dia_em_seg + horas*horas_em_seg + minutos*minutos_em_seg + segundos
print(f"O total de tempo em segundos é {total_segundos}")