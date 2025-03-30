// C00000250)Escreva um algoritmo que leia
// os valores das quatro provas de um aluno e escreva a média
// aritmética considerando apenas as três melhores notas. 
//Por exemplo, se o valores lidos foram 9, 9.5, 7, e 8, a média 
//será (9 + 9.5 + 8)/3 (a prova de nota 7 é descartada).  
// Dica:Não esqueça de considerar a possibilidade de ocorrerem notas iguais.

#include <stdio.h>

void main()
{
	float p1, p2, p3, p4;
	float media, pior_nota;

	printf("Informe o valor das 4 notas..\n");
	scanf("%f%f%f%f", &p1, &p2, &p3, &p4);

	if (p1 <= p2 && p1 <= p3 && p1 <=p4) {
		pior_nota = p1;
	} else if
	   (p2 <= p1 && p2 <= p3 && p2 <= p4) {
	   	pior_nota = p2;
	} else if
	   (p3<= p1 && p3 <= p2 && p3 <= p4)
	   {
	   	pior_nota = p3;
	} else if 
	   (p4<=p1 && p4 <= p2 && p4 <= p3)
	{
		pior_nota = p4;
	}


	media = (p1 + p2 + p3 +p4 - pior_nota) / 3;
	printf("%.2f", media);

}
