// C00000080) Faça um algoritmo que leia dois valores e 
//escreva os dois em ordem crescente.

#include <stdio.h>

void  main()
{
         
         int v1, v2;
         int menor, maior;

         printf("Digite os dois números\n");
         scanf("%d%d",&v1,&v2,);

         if ( v1 < v2 ) {
                  menor = v1;
                  maior = v2;

         } else {
                  menor = v2;
                  maior = v1;
         }

         printf("%d - %d",menor, maior);

}
