// Exercício 1: Maior de Três Números
// Escreva um programa que leia três números inteiros e determine qual é o maior usando condicionais aninhados.

#include <stdio.h>

void main()
{
    int n1, n2, n3, maior, meio, menor;
    printf("Informe os 3 números..\n");
    scanf("%d%d%d", &n1,&n2,&n3);

    if (n1>=n2 && n1>=n3) {
        maior = n1;
        if (n2 >= n3) {
            meio = n2;
            menor = n3;
        } else {
            meio = n3;
            menor = n2;
        }
    } else if
        (n2>=n1 && n2>=n3) {
            maior = n2;
            if(n1 >= n3) {
                meio = n1;
                menor = n3;
            } else {
                meio = n3;
                menor = n1;
            }
    } else {
        maior = n3;
        if (n2>=n1) {
            meio = n2;
            menor = n1;
        } else {
            meio = n1;
            menor = n2;
        }
    }

    printf("%d -> %d -> %d\n", maior, meio, menor);

}
