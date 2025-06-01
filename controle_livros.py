
import json

lista = []

def cadastrar_livro(nome:str, lista:list) -> None:
    lista.append(nome)
    print(f"{nome} incluído com sucesso!")

def excluir_livro(nome:str, lista:list) -> None:
    lista.remove(nome)
    print(f"{nome} excluído com sucesso!")

def listar_livros(lista:list) -> None:
    for indice, i in enumerate(lista, 1):
        print(f"{indice} - {i}")

def gravar_txt(lista:list, nome_arquivo:str) -> None:
    gravar = open(nome_arquivo, "w")
    for a,b in enumerate (lista,1):
        gravar.write(f"{a} - {b}\n")
    gravar.close()
    print(f"Arquivo {nome_arquivo} gerado com sucesso!")

def gravar_json(lista:list, nome_arquivo:str) -> None:
    dic = []
    for l in lista:
        linha = {"livro" : l}
        dic.append(linha) 
    with open(nome_arquivo, "w") as arq:
        json.dump(dic, arq)


while True:
    print("(1) Cadastrar Livro")
    print("(2) Excluir Livro")
    print("(3) Listar Livros")
    print("(4) Exportar txt")
    print("(5) Exportar JSON")
    print("(6) Sair")

    opcao = int(input("Informe a opção desejada:"))

    if opcao == 1:
        nome = input("Qual o nome do livro?")
        cadastrar_livro(nome, lista)

    elif opcao == 2:
        listar_livros(lista)
        nome = input("Digite o nome de qual deseja excluir")
        try:
            excluir_livro(nome, lista)
        except:
            print("Nome do livro inválido.")
            continue

    elif opcao == 3:
        listar_livros(lista)

    elif opcao == 4:
        exportar = input("Tem certeza que deseja exportar o arquivo? (S/N)").upper()
        if exportar == "N" or exportar != "S":
            continue
        else:
            nome_arquivo = input("Informe nome e extensão do arquivo:")
            try:
                gravar_txt(lista, nome_arquivo)
            except:
                print("Erro ao salvar o arquivo.")
                continue

    elif opcao == 5:
        exportar = input("Tem certeza que deseja exportar o arquivo? (S/N)").upper()
        if exportar == "N" or exportar != "S":
            continue
        else:
            nome_arquivo = input("Informe nome e extensão do arquivo:")
            try:
                gravar_json(lista, nome_arquivo)
            except:
                print("Erro ao salvar o arquivo.")
                continue

    elif opcao == 6:
        print("Programa finalizado.")
        break
    else: 
        continue

