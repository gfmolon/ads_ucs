#include <stdio.h>

void main() {
    float valor_hora, ganho_turno;
    int hora_entrada, hora_saida, tempo_total;

    printf("Informe o valor da hora:\n");
    scanf("%f", &valor_hora);

    printf("Informe a hora de entrada e a hora de saída:\n");
    scanf("%d%d", &hora_entrada, &hora_saida);


    tempo_total = hora_saida - hora_entrada;
  

    ganho_turno = tempo_total * valor_hora;

    printf("Ganhou R$ %.2f\n", ganho_turno);

}
