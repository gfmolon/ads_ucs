/* S00000800) Faça um algoritmo que lê uma quantia inteira em segundos e escreva o número de horas,
 minutos e segundos correspondente. Dica: Para converter segundos para minutos
  usa-se a divisão inteira por 60. 
*/

#include <stdio.h>

void main()
{
    int seg, h, s, m;
    scanf("%d", &seg);

    h = seg / 3600;
    seg =  seg % 3600;
    m = seg / 60;
    s = seg % 60;

    printf("Horas:%d Minutos:%d Segundos:%d", h, m, s);
    
