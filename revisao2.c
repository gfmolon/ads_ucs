#include <stdio.h>

void main()
{
    // 4 digitos
    // 1234

    int numero, sala, lugar;
    printf("Informe o número de 4 dígitos:\n");
    scanf("%d",&numero);

    sala = numero / 100;
    lugar = numero % 100;

    printf("Sala: %d\n", sala);
    printf("Lugar: %d\n", lugar);

}