#include <stdio.h>

void main()
{
    int dia_nasc, mes_nasc, ano_nasc; 
    int dia_atual, mes_atual, ano_atual; 
    float valor_compra, desconto, valor_final;
    int idade;

    printf("Informe a data de nascimento (dia mes ano): ");
    scanf("%d %d %d", &dia_nasc, &mes_nasc, &ano_nasc);

    printf("Informe a data atual (dia mes ano): ");
    scanf("%d %d %d", &dia_atual, &mes_atual, &ano_atual);

    printf("Informe o valor da compra: R$ ");
    scanf("%f", &valor_compra);

    idade = ano_atual - ano_nasc;
    if (mes_atual < mes_nasc || (mes_atual == mes_nasc && dia_atual < dia_nasc))
    {
        idade--; 
    }

    if (idade < 0)
    {
        printf("Erro: Data invalida! A data de nascimento nao pode ser posterior a data atual.\n");
        return 1;
    }

    if (idade >= 18 && idade <= 25)
    {
        desconto = 5;
    }
    else if (idade >= 26 && idade <= 35)
    {
        desconto = 8;
    }
    else if (idade >= 36 && idade <= 45)
    {
        desconto = 10;
    }
    else if (idade >= 46 && idade <= 55)
    {
        desconto = 12;
    }
    else if (idade >= 56 && idade <= 65)
    {
        desconto = 15;
    }
    else if (idade >= 66)
    {
        desconto = 20;
    }
    else 
    {
        desconto = 0;
    }

    valor_final = valor_compra * (1 - desconto / 100);

    printf("\nIdade do cliente: %d anos\n", idade);
    if (desconto > 0)
    {
        printf("Desconto aplicado: %.0f%%\n", desconto);
        printf("Valor original: R$ %.2f\n", valor_compra);
        printf("Valor final com desconto: R$ %.2f\n", valor_final);
    }
    else
    {
        printf("Nenhum desconto aplicado (idade fora das faixas).\n");
        printf("Valor final: R$ %.2f\n", valor_compra);
    }

}
