// Desenvolver um algoritmo que leia um número inteiro e
// verifique se o número é divisível por 5 e por 3 ao mesmo tempo.


#include <stdio.h>

void main()
{

	int numero;

	printf("Digite um número inteiro");
	scanf("%d",&numero);

	if (numero % 5 == 0 && numero % 3 == 0) {
		printf("É divisível por 5 e 3.\n");
	} else {
		printf("Não é divisível por 5 e 3.\n");
	}

}
