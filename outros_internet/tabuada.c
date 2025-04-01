#include <stdio.h>

void main()
{

	int numero;
	printf("Digite um número de 1 a 9:\n");
	scanf("%d", &numero);

	if (numero < 1 && numero > 9) {
		printf("Erro");
	} else {

	for (int i = 1; i < 10; i++) {
     printf("%d * %d = %d\n", numero,i, numero*i );
	}
	
	}


}
