//C00000350)Faça um algoritmo que leia 3 valores a, b e c, 
//lados de um triângulo, e verifique o tipo de triângulo formado escrevendo: 
//0 - se o triângulo é equilátero (os três lados são iguais); 
//1 - se o triângulo é isósceles (dois lados iguais e um diferente);
//2 - escaleno (3 lados diferentes).

#include <stdio.h>

void main()
{

	int a,b,c;

	printf("Coloque os 3 lados\n");
	scanf("%d%d%d", &a, &b, &c);

	if( a==b && a==c && b==c) {
		printf("0.\n");
	} else if 
	(a!=b && a!=c && b!=c)
	{
		printf("2.\n");
	} else {
		printf("1.\n");
	}


}
