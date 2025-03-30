// C00000350)Faça um algoritmo que leia 3 valores
// a, b e c, lados de um triângulo, e verifique o 
// tipo de triângulo formado escrevendo: 0 - se o triângulo é equilátero
// (os três lados são iguais); 1 - se o triângulo é isósceles
// (dois lados iguais e um diferente);2 - escaleno (3 lados diferentes).

#include <stdio.h>

void main()
{
	int lado1, lado2, lado3;


	printf("Informe os 3 valores:\n");
	scanf("%d%d%d", &lado1, &lado2, &lado3);

	if (lado1 == lado2 && lado1 == lado3) {
		printf("0\n");
	} else if
	   (lado1 != lado2 && lado1 != lado3 && lado2 != 
	   	lado1 && lado2 != lado3 && lado3 != lado2 && lado3 != lado1 )
	   {
	   	printf("2\n");
	   } else {
	   	printf("1\n");
	   }

}
