// C00000200) Faça um algoritmo que leia 3 
//valores v1, v2 e v3 e coloque-os em ordem decrescente, 
//de forma que v1 contenha o maior, v2 contenha o 
//elemento do meio (nem o maior, nem o menor), 
//e v3 contenha o menor. Escreva os valores ordenados em ordem decrescente. 

#include <stdio.h>

void main()
{
	int v1, v2, v3;
	int menor, meio, maior;

	printf("Informe os 3 valores..");
	scanf("%d%d%d",&v1,&v2,&v3);

	if (v1 >= v2 && v1 >= v3) {
		maior = v1;
		if (v2 >= v3) {
			meio = v2;
			menor = v3;
		} else {
			meio = v3;
			menor = v2;
		}
	} else if 
	    (v2>=v1 && v2>= v3) {
	    	maior = v2;
	    if (v1 >= v3) {
	    	meio = v1;
	    	menor = v3;
	    } else {
	    	meio = v3;
	    	menor = v1;
	    }
	    }

	 else {
	 	maior = v3;
	 	if (v1 >= v2) {
	 		meio = v1;
	 		menor = v2;
	 	} else {
	 		meio = v2;
	 		menor = v1;
	 	}
	 }

	 v1 = maior;
	 v2 = meio;
	 v3 = menor;


	 printf("Ordem: %d%d%d", maior, meio, menor);





}
