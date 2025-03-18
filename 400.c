/*
S00000400) Faça um algoritmo que leia 2 valores e escreva o maior deles. Dica: O maior entre
dois valores quaisquer v1 e v2 pode ser calculado pela expressão (v1+v2+|v1-v2|)/2.
O operador matemático de módulo ( |x| ) é representado na nossa linguagem pela função abs(x).
 */

#include <stdio.h>
#include <math.h>

void main()
{
     float n1,n2,m;
     printf("Digite os dois valores:\n");
     scanf("%f%f", &n1,&n2);

     m = (n1 + n2 + abs(n1-n2)) / 2;
         
     printf("Maior: %f\n", m);
         
}
