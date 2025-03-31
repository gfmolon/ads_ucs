// Dados quatro números distintos,
// desenvolver um algoritmo que determine e imprima a soma dos três menores.

#include <stdio.h>

void main()
{
	int n1, n2, n3, n4, soma, maior;

	printf("Informe os 4 números:\n");
	scanf("%d%d%d%d",&n1, &n2, &n3, &n4);

	if (n1 >= n2 && n1>= n3 && n1>= n4) {
		maior = n1;
	} 

	else if (n2 >= n1 && n2>= n3 && n2>= n4) {
		maior = n2;
	} 

	else if (n3 >= n1 && n3>= n2 && n3>= n4) {
		maior = n3;
	} 

	else  {
		maior = n4;
	} 		

	soma = (n1+n2+n3+n4)-maior;
	printf("%d", soma);

}
