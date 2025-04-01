#include <stdio.h>

void main()
{
	float valor_metro, valor_cm, valor_mm;

	printf("Informe um valor em m\n");
	scanf("%f", &valor_metro);

	valor_cm = valor_metro * 100;
	valor_mm = valor_metro * 1000;

	printf("Centímetros: %.2f\n", valor_cm);
	printf("Milímetros: %.2f\n", valor_mm);

}
