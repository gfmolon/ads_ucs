/*
S00000300) Faça um algoritmo que leia 3 valores a, b e c, coeficientes de uma equação de segundo grau,
e calcule e escreva a soma das raízes da equação.
Dica:As raízes de uma equação podem ser calculadas pela fórmula de Baskhara.
*/

#include <stdio.h>
#include <math.h>

void main()
{
     float a, b, c, delta, x1, x2, res;
     printf("Informe os valores:\n");
     scanf("%f%f%f",&a, &b, &c);

     delta = (b * b) - (4 * a * c);
     x1 = ( -b + sqrt(delta) ) / (2 * a);
     x2 = ( -b - sqrt(delta) ) / (2 * a);
     res = x1 + x2;

     printf("%f\n",res);
}
