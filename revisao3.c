#include <stdio.h>

void main() // Alterado de void main() para int main()
{
    int he, hs;           // Mantive suas variáveis de entrada e saída
    int total_entrada;    // Tempo de entrada em minutos
    int total_saida;      // Tempo de saída em minutos
    int duracao;          // Duração total em minutos
    int duracao_hora;     // Horas da duração
    int duracao_minutos;  // Minutos da duração
    float percentual;     // Percentual de permanência
    int tempo_maximo = 120; // 2 horas em minutos

    // Entrada - mantive seu formato
    printf("Hora entrada (HHMM):\n");
    scanf("%d", &he);
    printf("Hora saida (HHMM):\n");
    scanf("%d", &hs);

    // Correção na separação dos dígitos
    int hora_entrada = he / 100;    // Pega horas da entrada
    int min_entrada = he % 100;     // Pega minutos da entrada
    int hora_saida = hs / 100;      // Pega horas da saída
    int min_saida = hs % 100;       // Pega minutos da saída

    // Transforma tudo em minutos
    total_entrada = hora_entrada * 60 + min_entrada;
    total_saida = hora_saida * 60 + min_saida;
    
    // Calcula duração com verificação de tempo negativo
    duracao = total_saida - total_entrada;
    if (duracao < 0) {
        duracao = 0;
    }

    // Tempo em horas e minutos
    duracao_hora = duracao / 60;
    duracao_minutos = duracao % 60;

    // Calcula percentual
    if (duracao >= tempo_maximo) {
        percentual = 100.0;
    } else {
        percentual = (duracao * 100.0) / tempo_maximo;
    }

    // Saída formatada
    printf("\nTempo de Permanencia: %02d:%02d\n", duracao_hora, duracao_minutos);

    // Condições para certificado
    if (duracao < 20) {
        printf("Sem certificado com permanencia de %.1f%%\n", percentual);
    } 
    else if (duracao >= 20 && duracao <= 40) {
        printf("Certificado de Presenca com permanencia de %.1f%%\n", percentual);
    }
    else if (duracao > 40) {
        printf("Certificado de Participacao com permanencia de %.1f%%\n", percentual);
    }

  
}