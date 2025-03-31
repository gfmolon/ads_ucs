// C00001000)Faça um algoritmo que leia para um trabalhador
// o valor que ganha por hora, a hora de entrada
// e a hora de saída (valores inteiros, sem minutos)
// e calcule e escreva quanto ele ganhou pelo turno. 
// Considere que ele entra e sai no mesmo dia,
// e que as horas a partir das 20:00 valem 20% a mais (adicional noturno).

#include <stdio.h>

void main()
{
    int he, hs, horas;         
    float valor_hora, total_ganho; 
    
    printf("Informe a hora de entrada (0-23): ");
    scanf("%d", &he);
    printf("Informe a hora de saida (0-23): ");
    scanf("%d", &hs);
    printf("Informe o valor por hora: ");
    scanf("%f", &valor_hora);
    
    horas = hs - he;
    
    total_ganho = valor_hora * horas;
    
    // Verifica e calcula adicional noturno (20% a mais após 20:00)
    if (he >= 20) {
        total_ganho = total_ganho * 1.20;  // Aumenta 20% o valor total
    }
    else if (hs > 20) {
        // Calcula quantas horas foram após 20:00
        int horas_noturnas = hs - 20;
        // Adiciona 20% apenas nas horas noturnas
        total_ganho = (valor_hora * (20 - he)) + (valor_hora * horas_noturnas * 1.20);
    }
    
    // Exibe o resultado
    printf("Total ganho pelo turno: R$ %.2f\n", total_ganho);
}
