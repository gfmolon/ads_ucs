#include <stdio.h>

void main()
{

    int cod_prato, qt_prato, cod_bebida, qt_bebida;
    float total_prato, total_bebida, total_pedido;
    float preco_prato, preco_bebida;


    printf("Informe o cód prato e qt..\n");
    scanf("%d",&cod_prato);
    scanf("%d",&qt_prato);

    printf("Informe o cód bebida e qt..\n");
    scanf("%d",&cod_bebida);
    scanf("%d",&qt_bebida);

    // prato * qt > 250 = nao paga bebida

    //comida
    if (cod_prato == 1) {
        preco_prato = 39.99;
    } 
    else if (cod_prato == 2)
    {
        preco_prato = 45.00;
    }
    else if (cod_prato == 3)
    {
        preco_prato = 120.00;
    }
    else if (cod_prato == 4)
    {
        preco_prato = 45.00;
    }
    else if (cod_prato == 5)
    {
        preco_prato = 39.99;
    }

     //bebida
     if (cod_bebida == 0) {
        preco_bebida = 0;
    } 
    else if (cod_bebida == 1)
    {
        preco_bebida = 5.00;
    }
    else if (cod_bebida == 2)
    {
        preco_bebida = 3.00;
    }
    else if (cod_bebida == 3)
    {
        preco_bebida = 7.00;
    }
    else if (cod_bebida == 4)
    {
        preco_bebida = 10.00;
    }
    
    total_prato = preco_prato * qt_prato;
    
    if (total_prato > 250) {
        total_bebida = 0;
    } else {
        total_bebida = preco_bebida * qt_bebida;
    }

    total_pedido = total_prato + total_bebida;

    printf("Quantidade de Pratos: %d\n", qt_prato);
    printf("Valor total dos Pratos: R$ %.2f\n", total_prato);
    printf("Quantidade das Bebidas: %d\n", qt_bebida);
    printf("Valor total das Bebidas: R$ %.2f\n", total_bebida);
    printf("Valor total do Pedido: R$ %.2f\n", total_pedido);

}