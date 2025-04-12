#include <stdio.h>

void main()
{
    int cod_sala, qt_ingresso;
    float desconto = 0;
    float valor_total, valor_sala;

    printf("Informe o código da sala\n");
    scanf("%d",&cod_sala);

    if(cod_sala < 1 || cod_sala > 5) {
        printf("Código da sala inválido.\n");
    } else {

        printf("Informe a qt de ingressos\n");
        scanf("%d",&qt_ingresso);

        //valor sala
        if(cod_sala == 1){
            valor_sala = 20;
        }
        else if(cod_sala==2) {
            valor_sala = 20;
        }
        else if(cod_sala==3) {
            valor_sala = 40;
        } 
        else if(cod_sala==4) {
            valor_sala = 55;
        } else if(cod_sala==5) {
            valor_sala = 65;
        }

        //testa desconto
        if(qt_ingresso >=3 && qt_ingresso <=6) {
            desconto = 0.95;
        }
        else if(qt_ingresso >=7 && qt_ingresso <=12) {
            desconto = 0.90;
        }
        else if(qt_ingresso >=13) {
            desconto = 0.85;
        }   

        //total
        valor_total = qt_ingresso * valor_sala;

        // aplica desconto
        if (desconto != 0) {
            valor_total = valor_total*desconto;
        } 

        printf("Sala Temática: %d\n",cod_sala);
        printf("Quantidade de Ingressos: %d\n",qt_ingresso);
        printf("Valor Total: R$ %.2f\n", valor_total);

    }

 
}