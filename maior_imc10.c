#include <stdio.h>

int main() {

    int i;
    float peso, altura, imc, maior_imc;
    float peso_maior, altura_maior;

    printf("Informe o peso e altura\n");
    scanf("%f%f", &peso, &altura);

    peso_maior = peso;
    altura_maior = altura;
    maior_imc = peso / (altura * altura);

    for (i = 1; i <= 9; i++) {
        printf("Informe o peso e altura\n");
        scanf("%f%f", &peso, &altura);
        imc = peso / (altura * altura);

        if (imc > maior_imc) {
            maior_imc = imc;
            peso_maior = peso;
            altura_maior = altura;
        }
    }

    printf("Maior Imc:%.2f\tMaior Peso:%.2f\tMaior Altura:%.2f", maior_imc,
           peso_maior, altura_maior);

    return 0;
}
