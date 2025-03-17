// S00000100) Faça um algoritmo que leia dois valores inteiros e escreva a sua soma

#include <stdio.h>

void main()
{
    int valor1, valor2, soma;
    printf("Informe os valores 1 e 2:\n");
    scanf("%d%d",&valor1, &valor2);
    
    soma = valor1 + valor2;
    
    printf("Soma: %d\n",soma);
}
