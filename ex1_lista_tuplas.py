
def imprimir_relatorio_mensal(vendas: list) -> None:
    meses = (
        "JANEIRO", "FEVEREIRO", "MARÇO", "ABRIL", "MAIO", "JUNHO",
        "JULHO", "AGOSTO", "SETEMBRO", "OUTUBRO", "NOVEMBRO", "DEZEMBRO"
    )

    for i in range(len(meses)):
        print(f"{meses[i]}: R${vendas[i]:.2f}")


vendas = [12000, 23000, 18000, 15000, 17000, 21000, 25000, 22000, 19500, 20000, 21000, 22500]
imprimir_relatorio_mensal(vendas)
