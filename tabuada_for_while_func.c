#include <stdio.h>

int solicitacao_numero() {
    int n;
    printf("Informe um número de 1 a 9..\n");
    scanf("%d",&n);
    return n;
}

int main()
{
    int numero;

    numero = solicitacao_numero();
    while (numero < 1 || numero > 9)
    {
        numero = solicitacao_numero();
    }
    
    printf("Número escolhido: %d\n", numero);
    for (int x=1; x<10; x++){
        printf("%d * %d = %d\n", x,numero,x*numero);
    }


    return 0;
}
