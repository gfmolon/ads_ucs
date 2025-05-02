#include <stdio.h>

int main() {

    // mini calculadora
    int opcao;
    float n1, n2, calculo;

    //fica repetindo até dar algum erro
while(1) {

    //input
    printf("Número 1:\n");
    scanf("%f",&n1);

    printf("Número 2:\n");
    scanf("%f",&n2);

    //menu
    printf("OPÇÕES:\n");
    printf("(1) SOMA\n");
    printf("(2) SUBTRAÇÃO\n");
    printf("(3) MULTIPLICAÇÃO\n");
    printf("(4) DIVISÃO\n");
    printf("(5) SAIR\n");
    scanf("%d",&opcao);

    //soma
    if(opcao == 5) {
        printf("Programa encerrado.\n");
        break;
    } else if (opcao == 1) {
        printf("SOMA:\n");
        calculo = n1+n2;
        printf("%.2f + %.2f = %.2f\n",n1,n2,calculo);
    } else if (opcao == 2) {
        printf("SUBTRAÇÃO:\n");
        calculo = n1-n2;
        printf("%.2f - %.2f = %.2f\n",n1,n2,calculo);
    } else if (opcao == 3) {
        printf("MULTIPLICAÇÃO:\n");
        calculo = n1*n2;
        printf("%.2f * %.2f = %.2f\n",n1,n2,calculo);
    } else if (opcao == 4) {
        printf("DIVISÃO:\n");
        if(n2 == 0) {
            printf("O segundo número não pode ser 0.\n");
        } else {
            calculo = n1/n2;
            printf("%.2f / %.2f = %.2f\n",n1,n2,calculo);
        }
    }


}

return 0;
}


