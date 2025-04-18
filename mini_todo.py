lista = []

while len(lista) <= 4:
    entrada = input("Informe uma entrada")
    lista.append(entrada)
else:
    contador=0
    for x in lista:
        contador = contador+1 
        print(f"{contador}:{x}")

