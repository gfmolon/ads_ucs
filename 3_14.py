qt_km = int(input("Qual qt km percorridos?\n"))
qt_dias = int(input("Informe a qt de dias\n"))

preco_dia = 60
preco_km = 0.15

preco_cobrar = qt_km*preco_km + qt_dias*preco_dia

print(f"O valor a ser cobrado é {preco_cobrar:.2f}\n")