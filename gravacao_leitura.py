dados = []

def cadastrar_contato(lista:list) -> None:
    nome = input("Informe o nome")
    telefone = input("Informe o telefone")
    linha = f"{nome} - {telefone}"
    lista.append(linha)
    
    arq = open("dados.txt", "w")
    for x in lista:
        arq.write(x)
    arq.close()

def ler_documento(arquivo:str) -> None:
    arq = open(f"{arquivo}", "r")
    conteudo = arq.read()
    print(conteudo)
    arq.close()

cadastrar_contato(dados)

ler_documento(arquivo="dados.txt")

