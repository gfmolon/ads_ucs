#include <stdio.h>

void main()
{

    int numero, primeira_parte, segunda_parte;
    printf("Informe o número:\n");
    scanf("%d",&numero);

    // 123456
    primeira_parte = numero / 100;
    segunda_parte = numero % 100;

    printf("%d\n",primeira_parte);
    printf("%d\n",segunda_parte);

}