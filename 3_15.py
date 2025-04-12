qt_cigarros_dia = int(input("Qual quantidade de cigarros por dia?\n"))
anos_fumando = int(input("Informe a quantos anos voce fuma\n"))

#10 minutos vida a cada cigarro
# quantos dias de vida o fumante perderá

#calcular tudo em minutos
reducao_em_minutos = anos_fumando*365 * qt_cigarros_dia * 10
reducao_em_dias = reducao_em_minutos / (24 * 60)
print(f"Redução do tempo de vida: {reducao_em_dias}")