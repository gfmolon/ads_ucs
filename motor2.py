

motor = input("Qual motor deseja acionar? (1 ou 2)\n")
direcao = input("Qual direção? (F ou T)\n").upper();


if motor == "1" or motor == "2" and direcao == "F" or direcao == "T":
    if motor == "1" and direcao == "F":
        print("Motor 1 andar pra frente.")
    elif motor == "2" and direcao == "F":
        print("Motor 2 andar pra frente.")
    elif motor == "1" and direcao == "T":
        print("Motor 1 andar pra trás.")
    elif motor == "2" and direcao == "T":
        print("Motor 2 andar pra trás.")
else:
        print("Combinação inválida")

