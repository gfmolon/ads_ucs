

playlists = []

def menu():
    print("*"*30)
    print("MENU")
    print("*"*30)
    print("(1) Listar")
    print("(2) Cadastrar")
    print("(3) Excluir")
    print("*"*30)
    opcao = input("SELECIONE UMA OPÇÃO:")
    return opcao

def listar(lista):
    if len(lista) > 0:
        for i, playlist in enumerate(lista):
            print(f"{i}-{playlist}")
    else:
        print("Nenhuma lista cadastrada.")

def cadastrar(lista):
    playlist = input("NOME DA PLAYLIST")
    lista.append(playlist)
    listar(lista)

def excluir(lista):
    if len(lista) < 1:
        print("Nenhuma lista cadastrada.")
    else:
        listar(lista)
        playlist = int(input("INFORME O NÚMERO PARA EXCLUIR"))
        lista.pop(playlist)
        listar(lista)

while(True): 

    opcao = menu()

    if opcao == "1":
        listar(playlists) 

    elif opcao == "2":
        cadastrar(playlists)

    elif opcao == "3":
        excluir(playlists)

    else:
        print("Programa Encerrado.")
        break

