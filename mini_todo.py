lista = []

while len(lista) < 5:
    entrada = input("Informe uma entrada")
    lista.append(entrada)
 
contador=0
for x in lista:
    contador +=1
    print(f"{contador}:{x}")

