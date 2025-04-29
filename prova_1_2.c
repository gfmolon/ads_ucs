#include <stdio.h>
#include <wchar.h>

int main() {


    int he,hs,me,ms;
    int min_total_he, min_total_saida, duracao_min, duracao_hora;
    float valor;

    printf("Hora de entrada\n");
    scanf("%d",&he);
    printf("Minutos de entrada\n");
    scanf("%d",&me);
    printf("Hora de saída\n");
    scanf("%d",&hs);
    printf("Minutos de saída\n");
    scanf("%d",&ms);

    min_total_he= he * 60 + me;
    min_total_saida = hs * 60 + ms;

    if(min_total_he > min_total_saida) {
        duracao_min = (24*60 - min_total_he) + min_total_saida;
    } else {
        duracao_min = min_total_saida - min_total_he;    
    }

    duracao_hora = duracao_min / 60;
    if ( duracao_min % 60 != 0) {
        duracao_hora++;
    }

    if (duracao_hora <= 1) {
        valor = 15;
    }
    else if (duracao_hora <= 3) {
        valor = 15 + (duracao_hora-1)*10;
    }
    else {
        valor = 30 + ((duracao_hora-3)*7);
    }

    printf("Valor: R$ %.2f",valor);

return 0;
}


