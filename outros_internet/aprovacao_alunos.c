// Exercício 5: Aprovação de Aluno
// Faça um programa que receba duas notas de um aluno (0 a 10) e determine:

//Aprovado (média ≥ 7)
//Recuperação (média entre 5 e 6.9)
//Reprovado (média < 5)

//Use condicionais aninhados para calcular a média e classificar o resultado.

#include <stdio.h>

void main()
{
    float n1, n2, media;

    printf("Informe a nota:\n");
    scanf("%f%f", &n1,&n2);

    media = (n1+n2)/2;

    if (media >= 5) {
            
        if (media <= 6.9) {
            printf("Recuperação\n");
        } else {
            printf("Aprovado\n");
        }

    } else {
        printf("Reprovado\n");
    }



}
