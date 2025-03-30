// C00000060) Faça um algoritmo que leia dois valores e,
// através de uma comparação, escreva o maior deles. 
// Considere que os dois valores são diferentes.

#include <stdio.h>

void main()
{
	int valor1, valor2, maior;

	printf("Informe os dois valores\n");
	scanf("%d%d", &valor1, &valor2);

	if (valor1 > valor2) {
		maior = valor1;
	} else {
		maior = valor2;
	}

	printf("Maior: %d\n",maior);

}
