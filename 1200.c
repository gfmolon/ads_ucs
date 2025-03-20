/*
S00001200) Faça um algoritmo que leia 4 valores, Hi, Mi, Hf, Mf, representando
 respectivamente a hora e minuto inicial e final de um evento, e calcule a duração do
mesmo em horas e minutos. Considere que o evento inicia e termina no mesmo dia.
 Dica: Para simplificar o problema, converta cada par de valores em um único valor em minutos.
*/

#include <stdio.h>

void main(){
         
         int hi, mi, hf, mf;
         int min, h, m;
                   
         printf("Digite a hora inicial: ");
         scanf("%d%d",&hi, &mi);
                   
         printf("Digite a hora final: ");
         scanf("%d%d",&hf, &mf);

         mi = hi * 60 + mi;
         mf = hf * 60 + mf;
         min = mf - mi;

         h = min / 60;
         m = min % 60;

         printf("Diferenca: %d:%d\n", h,m);
}


