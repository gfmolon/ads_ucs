#include <stdio.h>


int main() {

    int n, i, fat;

    while(1) {
        fat = 1;

        printf("Informe o valor de n\n");
        scanf("%d",&n);

        if(n<=0) {
            printf("Programa encerrado.\n");
            break;
        }

        for(i=1;i<=n;i++) {
            fat *= i;
        }

        printf("O fatorial de %d é: %d\n",n,fat);

    }
return 0;
}



