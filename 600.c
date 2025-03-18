/*
S00000600) Faça um algoritmo que leia 3 valores escreva o maior deles.
Dica:O maior entre três valores pode ser encontrado pela aplicação repetida
da expressão para encontrar o maior entre dois valores.
 */

#include <stdio.h>
#include <math.h>

//  m = (n1 + n2 + abs(n1-n2)) / 2;

void main()
{
         float n1, n2, n3, m, m3;
         
         printf("Informe os 3 numeros:\n");
         scanf("%f%f%f", &n1, &n2, &n3);
         
         m = (n1 + n2 + abs(n1-n2)) / 2;
         
         m3 = (m + n3 + abs(m-n3)) / 2;

         printf("O maior número é: %f", m3);
         
}
