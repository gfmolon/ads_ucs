// Exercício 3: Calculadora de Faixa Etária
//Crie um programa que receba a idade de uma pessoa e classifique-a em:

//1- Criança (0 a 12 anos)
//2- Adolescente (13 a 17 anos)
//3- Adulto (18 a 59 anos)
//4- Idoso (60 anos ou mais)

//Use condicionais aninhados para fazer a classificação.

#include <stdio.h>

void main()
{
    int idade;

    printf("Informe sua idade\n");
    scanf("%d",&idade);

    if (idade>=0){
    
        if (idade <= 12) {
            printf("Classificação: Criança\n");
        } else if
        (idade <= 17) {
            printf("Classificação: Adolescente\n");
        } else if
        (idade < 60) {
            printf("Classificação: Adulto\n");
        } else {
            printf("Classificação: Idoso\n");
        }

    } else {
        printf("Dados Inválidos\n");
    }

}
