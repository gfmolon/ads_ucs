#include <stdio.h>

void main()
{
    //medir diferenca entre horarios em um mesmo dia.

    int hora_inicial, hora_final, min_inicial, min_final;
    int duracao_min_i, duracao_min_f, duracao_evento, duracao_evento_h, duracao_evento_m; 

    printf("Informe a hora (HHMM):\n");  
    scanf("%d",&hora_inicial);

    min_inicial = hora_inicial % 100;
    hora_inicial = hora_inicial/100;
    duracao_min_i = (hora_inicial * 60) + min_inicial;

    printf("Informe a hora final (HHMM):\n");  
    scanf("%d",&hora_final);

    min_final = hora_final % 100;
    hora_final = hora_final/100;
    duracao_min_f = (hora_final * 60) + min_final;

    duracao_evento = duracao_min_f - duracao_min_i;

    duracao_evento_h = duracao_evento / 60;
    duracao_evento_m = duracao_evento % 60;

    printf("Duração do evento:\n");
    printf("Horas:%d\n",duracao_evento_h);
    printf("Minutos:%d\n",duracao_evento_m);

}
