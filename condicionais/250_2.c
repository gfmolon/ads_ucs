#include <stdio.h>

void main()
{
	float p1, p2, p3, p4, menor, media;

	printf("Coloque o valor das 4 nostas\n");
	scanf("%f%f%f%f", &p1, &p2, &p3, &p4);

	if (p1<=p2 && p1<=p3 && p1<=p4) {
		menor = p1;

	} else if 
	   (p2<=p1 && p2<=p3 && p2<=p4) {
		menor = p2;

	} else if 
	   (p3<=p1 && p3<=p2 && p3<=p4) {
	   	menor = p3;
	   } else 
	{
		menor = p4;
	}

	media = (p1+p2+p3+p4 - menor) / 3;
	printf("Resultado da média das 3 maiores: %.2f\n", media);

}
