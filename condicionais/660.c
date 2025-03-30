// C00000660) Faça um algoritmo que leia 4 valores,
// Hi, Mi, Hf, Mf, representando respectivamente a
// hora e minuto inicial e final de um evento, e
// calcule a duração do mesmo em horas e minutos.
// Considere que o evento pode iniciar em um dia e
// terminar no dia seguinte. Dica:Para simplificar o
// problema, converta cada par de valores em um único valor em minutos.



// calcular duracao evento horas e minutos
// converter tudo em minutos


#include <stdio.h>

void main() 
{
	int hi,mi,hf,mf;
	int minutos_duracao_evento;
	int minutos_inicio;
	int minutos_fim;
	int hduracao;
	int mduracao;

	scanf("%d%d%d%d",&hi,&mi,&hf,&mf);

	minutos_inicio = hi*60 + mi;
	minutos_fim = hf*60 + mf;

	minutos_duracao_evento = minutos_fim - minutos_inicio;

	hduracao = (minutos_duracao_evento / 60);
	mduracao = (minutos_duracao_evento % 60);

	printf("%d horas e %d minutos\n", hduracao, mduracao);

}
