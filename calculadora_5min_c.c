#include <stdio.h>

int main() {

    int opcao;
    float n1,n2,calculo;

while(1) {

    printf("Primeiro número\n");
    scanf("%f",&n1);

    printf("Segundo número\n");
    scanf("%f",&n2);

    printf("(1) soma\n(2) multiplicação\n(3) subtração\n(4) divisão\n(5) sair\n");
    scanf("%d",&opcao);

    if (opcao == 1) {
        calculo = n1+n2;
        printf("%.2f\n",calculo);
    }
    else if (opcao == 2) {
        calculo = n1*n2;
        printf("%.2f\n",calculo);
    }
    else if (opcao == 3) {
        calculo = n1-n2;
        printf("%.2f\n",calculo);
    }
    else if (opcao ==4) {
        if (n2 == 0) {
            printf("O segundo número é 0. Impossível dividir.\n");
        } else {
            calculo = n1/n2;
            printf("%.2f\n",calculo);
        }
    }
    else if (opcao == 5) { 
        printf("Programa encerrado.\n");
        return 0;
    }

}

return 0;
}


