/* S00000150) Faça um algoritmo que leia 3 valores reais, notas de um aluno,
e escreva sua média aritmética. A média aritmética de um conjunto de valores
é dada pela soma dos valores dividido pela quantidade de valores considerados. 
*/

#include <stdio.h>
void main()
{
    float nota1, nota2, nota3, media;
    printf("Informe os valores das 3 notas:\n");
    scanf("%f%f%f",&nota1,&nota2,&nota3);
    media = (nota1+nota2+nota3)/3;
    printf("Média das notas: %2.f",media);
}
