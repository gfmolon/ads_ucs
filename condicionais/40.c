// C00000040) Faça um algoritmo que leia um valor
//e escreva: 0, se o valor é par; 1, se o valor é ímpar.

#include <stdio.h>

void main()
{
	int valor;
	scanf("%d", &valor);

	if (valor % 2 == 0) {
		printf("0");
	} else {
		printf("1");
	}

}
