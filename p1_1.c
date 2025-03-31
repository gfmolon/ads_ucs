// Um restaurante esta precisando de um programa que faça o
// controle de 1 pedido para patos e bebidas que devem ser servidos
// o cliente informa, qual codigo do prato, codigo bebida, e qt de cada um. O valor total da comida
// (Prato * Quantidade ultrapasse 250, o cliente nao paga bebida). As comidas e bebidas disponíveis para o cliente
// estão informados na tabela abaixo

// O programa deve receber dados de entrada
// codigo do prato, quantidade prato, codigo bebida, qt bebidas, calcular total e apresentar o resultado formato a seguir.
// Quantidade pratos: 3
// Valor total dos pratos: R$ 360,00
// Quantidade de Bebidas: 3
// Valor Total das bebidas: R$ 00,00
// Valor Total do Pedido: R$ 360,00


#include <stdio.h>

void main()
{
	
	int cod_prato, qt_prato, cod_bebida, qt_bebida;
	float total_comida, total_bebida, total_pedido;
	float valor_prato, valor_bebida;

	printf("Informe qual o prato e a quantidade:\n");
	scanf("%d%d",&cod_prato,&qt_prato);

	printf("Informe qual a bebida e a quantidade:\n");
	scanf("%d%d",&cod_bebida,&qt_bebida);

	//comidas
	if (cod_prato == 1)
	{
		valor_prato = 39.99;
	}

	if (cod_prato == 2)
	{
		valor_prato = 45.00;
	}

	if (cod_prato == 3)
	{
		valor_prato = 120.00;
	}

	if (cod_prato == 4)
	{
		valor_prato = 45.00;
	}	

	if (cod_prato == 5)
	{
		valor_prato = 39.00;
	}	

	//bebidas
		if (cod_bebida == 0)
	{
		valor_bebida = 0;
	}

	if (cod_bebida == 1)
	{
		valor_bebida = 5;
	}

	if (cod_bebida == 2)
	{
		valor_bebida = 3;
	}

	if (cod_bebida == 3)
	{
		valor_bebida = 7;
	}	

	if (cod_bebida == 4)
	{
		valor_bebida = 10;
	}	

	total_comida = qt_prato * valor_prato;
	total_bebida = qt_bebida * valor_bebida;

	if (total_comida > 250) {
		total_pedido = total_comida;
	} else {
		total_pedido = total_comida + total_bebida;
	}


 printf("Quantidade pratos: %d\n", qt_prato);
 printf("Valor total dos pratos: R$ %.2f\n", total_comida);
 printf("Quantidade de bebidas: %d\n", qt_bebida);
 printf("Valor total das bebidas: R$ %.2f\n", total_bebida);
 printf("Valor total do pedido: R$ %.2f\n", total_pedido);

}
