//C00000500)Faça um algoritmo que leia 3 notas de um aluno
// e escreva sua média harmônica.  Dica:A média harmônica entre
// três valores N1, N2 e N3 é calculada pela expressão 3/(1/N1+1/N2+1/N3).
// O que acontece se alguma das notas for igual a 0? Que resultado o algoritmo deve emitir? 

#include <stdio.h>

void main()
{

         float n1, n2, n3, mh;

         printf("Informe as tres notas..\n");
         scanf("%f%f%f",&n1,&n2,&n3);

         if (n1 == 0 || n2 == 0 || n3 == 0 ) {
                  mh = 0;
                  printf("%f indefinido. \n", mh);

         } else {
                  mh = 3 / (1/n1 + 1/n2 + 1/n3);

                  printf("%.2f",mh);
         }

}
