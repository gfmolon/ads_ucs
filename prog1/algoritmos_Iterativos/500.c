#include <stdio.h>

int main()
{
    int numero;
    printf("Digite um número positivo:\n");
    scanf("%d",&numero);

    while(numero <= 0) {
    printf("Digite um número positivo:\n");
    scanf("%d",&numero);
    }

    printf("Ok, número válido.");

return 0;
}


