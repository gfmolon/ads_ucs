/*
S00000200) Faça um algoritmo que leia 2 valores reais v1 e v2
e calcule e escreva a área do triângulo que tem base igual a v1 e altura igual a v2.
Dica:A área de um triângulo é dada pela expressão: (base x altura)/2.
*/

#include <stdio.h>

void main()
{
    float base,altura,area_triangulo;
    printf("Informe base e depois altura:\n");
    scanf("%f%f",&base,&altura);
    area_triangulo = (base * altura) / 2;
    printf("Área do triangulo é %2.f\n",  area_triangulo);
}
