// 1700.c
#include <stdio.h>

int main()
{

    float peso, altura, imc, maior_imc, maior_peso, maior_altura;

    printf("Informe seu peso:\n");
    scanf("%f",&peso);

    printf("Informe sua altura\n");
    scanf("%f",&altura);

    imc = peso/(altura*altura);

    maior_imc = imc;
    maior_peso = peso;
    maior_altura = altura;

    for(int i=2;i<=10;i++) {
        
        printf("Usuário: %d\n",i);
        printf("Informe seu peso:\n");
        scanf("%f",&peso);

        printf("Informe sua altura\n");
        scanf("%f",&altura);

        imc = peso/(altura*altura);

        if(imc>maior_imc) {
            maior_imc = imc;
            maior_peso = peso;
            maior_altura = altura;
        }

    }

    printf("Maior IMC: Peso: %.2f, Altura %.2f -> %.2f",maior_peso,maior_altura,maior_imc);

return 0;
}


