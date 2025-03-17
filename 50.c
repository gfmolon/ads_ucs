//S00000050) Faça um algoritmo que leia um valor N, representando o lado de um quadrado,
//e calcule e escreva a área do quadrado.

#include <stdio.h>

void main()
{
    int n, area;
    printf("Informe um valor:\n");
    scanf("%d",&n);
    area = n * n;
    printf("Área do Quadrado: %d\n",area);
}
