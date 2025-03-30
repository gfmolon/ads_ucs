// C00000700) As tarifas de um estacionamento são definidas assim: 
// A primeira e a segunda hora custam 5 reais cada. 
// A terceira e a quarta hora custam 2 reais cada. 
// A partir da quinta hora, cada hora custa 1 real cada. 
// Assim, se um carro ficar 5 horas no estacionamento, 
//o motorista pagará 15 reais (5+5+2+2+1). 
//Faça um algoritmo que leia dois valores He e Hs, r
//espectivamente a hora de entrada e saída no estacionamento 
//(horas inteiras, sem minutos), e escreva o valor a ser pago. 
//Considere que o usuário deve retirar seu carro antes da meia-noite,
// ou seja, ele não pode entrar em um dia e sair no dia seguinte.

#include <stdio.h>
#include <stdlib.h> // Para a função abs()

int main() {
    int h_entrada, h_saida;
    int duracao;
    int valor_a_cobrar = 0; // Inicializa a variável

    printf("Informe hora entrada, e hora de saida.\n");
    scanf("%d%d", &h_entrada, &h_saida);

    duracao = (h_saida - h_entrada); // Calcula a duração corretamente e garante que seja positiva

    if (duracao <= 2) {
        valor_a_cobrar = duracao * 5;
    } else if (duracao <= 4) {
        valor_a_cobrar = 10 + (duracao - 2) * 2;
    } else {
        valor_a_cobrar = 14 + (duracao - 4) * 1;
    }

    printf("Valor a cobrar: %d reais\n", valor_a_cobrar);

    return 0;
}
