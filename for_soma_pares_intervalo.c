#include <stdio.h>

// soma dos numeros pares dentro do intervalo dos numeros n1 e n2

int main()
{
    int n1, n2, soma=0;

    printf("Informe um número inicial\n");
    scanf("%d", &n1);
    printf("Informe outro número final\n");
    scanf("%d", &n2);

    for(int n=n1; n<=n2; n++) {
        if (n%2==0 ) {
            soma += n;
            printf("%d\n",n);
        }
    }

    printf("Soma dos pares: %d\n", soma);

    return 0;
}
