// codigo 6 digitos. 4 primeiros sao numero do pedido. 2 ultumos numero do garcom que atendeu mesa.
// ex: comanda     123456   (1234->pedido)   (56->garcom)
// mostrar o resultado:
// Número do Pedido: 0000
// Atendido pelo garçom cro: 00

#include <stdio.h> 

void main() 
{

	int cod_comanda;
	int cod_pedido_4;
	int cod_garcom_2;

	printf("Qual a comanda\n");
	scanf("%d",&cod_comanda);

	cod_pedido_4 = (cod_comanda / 100);
	cod_garcom_2 = (cod_comanda % 100);

	printf("Número do Pedido: %04d\n",cod_pedido_4);
	printf("Atendido pelo garçom: %02d\n",cod_garcom_2);

}
