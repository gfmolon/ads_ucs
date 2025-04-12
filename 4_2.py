v = float(input("Informe a velocidade do carro\n"))

if v > 80:
    print("Multado!")
    multa = (v-80)*5
    print(f"Valor da multa: R$ {multa:.2f}")