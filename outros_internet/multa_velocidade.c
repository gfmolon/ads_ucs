// Cálculo de multa por velocidade
//Escreva um programa em C que receba a velocidade de um carro (em km/h) e verifique se o motorista ultrapassou o limite permitido de 80 km/h. Se a velocidade for maior que o limite, calcule a multa da seguinte forma:  
//Até 20% acima do limite (inclusive), a multa é de R$ 150,00.  

//Acima de 20% até 50% do limite (inclusive), a multa é de R$ 300,00.  

//Acima de 50% do limite, a multa é de R$ 500,00.
//Exiba uma mensagem informando se houve multa e, se sim, o valor correspondente.


#include <stdio.h> 

void main() 
{
	int velocidade;
	int limite = 80;
	float multa;

	printf("Informe a velocidade:\n");
	scanf("%d", &velocidade);

	if (velocidade > limite && velocidade <= limite*1.2 ) {
		multa = 150;
	} else if 
	(velocidade > limite*1.2 && velocidade <= limite*1.5 ) {
		 multa = 300;
	} else if (velocidade > limite*1.5)
	{
		multa = 500;
	} else if (velocidade <= limite) {
		multa = 0;
	}

	if (multa==0) {
		printf("Não houve multa");
	} else {
		printf("Houve multa de R$ %.2f\n", multa);
	}

}
