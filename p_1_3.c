// Controle de tempo
// deve receber hora de entrada // e hora de saída dos clientes formato: HHMM
// variavel inteira entrada
// variavel inteira saida

//Tempo de Permanência: 00:11
//Categoria: Curta

#include <stdio.h>

void main()
{

	int entrada, saida, e_hora, s_hora, e_min, s_min, duracao, resultado_finalh, resultado_finalm;

	printf("Entrada: Informe HHMM\n");
	scanf("%d",&entrada);

	printf("Saída: Informe HHMM\n");
	scanf("%d",&saida);


	e_hora = entrada/100;
	s_hora = saida/100;

	e_min = entrada % 100;
	s_min = saida % 100;

	duracao = (s_hora*60+s_min) - (e_hora*60+e_min);

	if (duracao > 60) {
		resultado_finalh = duracao / 60;
		resultado_finalm = duracao % 60;
		printf("Tempo de Permanência: %d:%d\n", resultado_finalh, resultado_finalm);
	} else {
		resultado_finalm = duracao;
		printf("00:%d\n", resultado_finalm);
	}

	if (duracao < 15) {
		printf("Categoria: Curta\n");
	} else if 
	(duracao >= 15 && duracao <= 60) {
		printf("Categoria: Moderada\n");
	} else if (duracao > 60 && duracao <= 90)
	{
		printf("Categoria: Longa\n");
	} else if (duracao > 90 && duracao <= 180) {
		printf("Categoria: Muito Longa\n");
	} else {
		printf("Categoria: Extremamente Longa\n");
	}



}
