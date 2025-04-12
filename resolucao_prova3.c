#include <stdio.h>

void main() {
    int he, me, hs, ms;
    int total_entrada, total_saida, tempo_total;
    int horas, minutos;

    printf("Informe Entrada: HH e depois MM\n");
    scanf("%d%d", &he, &me);

    printf("Informe Saída: HH e depois MM\n");
    scanf("%d%d", &hs, &ms);

    // transforma tudo em minutos
    total_entrada = he * 60 + me;
    total_saida = hs * 60 + ms;

    //tempo total em minutos
    tempo_total = total_saida - total_entrada;

    //converte em formato hora e minutos para mostrar
    horas = tempo_total / 60;
    minutos = tempo_total % 60;
    printf("Tempo de Permanência: %02d:%02d\n", horas, minutos);

    //testa pra ver qual a categoria
    if (tempo_total < 15) {
        printf("Categoria: Curta\n");
    }
    else if (tempo_total >= 15 && tempo_total <= 60) {
        printf("Categoria: Moderada\n");
    }
    else if (tempo_total > 60 && tempo_total <= 90) {
        printf("Categoria: Longa\n");
    }
    else if (tempo_total > 90 && tempo_total <= 180) {
        printf("Categoria: Muito Longa\n");
    }
    else if (tempo_total > 180) {
        printf("Categoria: Extremamente Longa\n");
    }

}