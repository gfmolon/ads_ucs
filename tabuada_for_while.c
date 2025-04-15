#include <stdio.h>

int main()
{
    int numero;

    printf("Informe um número de 1 a 9..\n");
    scanf("%d",&numero);

    while (numero < 1 || numero > 9)
    {
        printf("Informe um número de 1 a 9..\n");
        scanf("%d",&numero);
    }
    
    for (int x=1; x<10; x++){
        printf("%d * %d = %d\n", x,numero,x*numero);
    }


    return 0;
}
