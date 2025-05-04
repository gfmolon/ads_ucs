#include <stdio.h>

int main() {

    int n, i, calculo;

    while (1) {
        printf("Diga qual número você quer de 1 a 10\n");
        scanf("%d", &n);

        if (n < 1 || n > 10) {
            printf("Número inválido.\n");
        } else {
            for (i = 1; i <= 10; i++) {
                calculo = n * i;
                printf("%d * %d = %d\n", n, i, calculo);
            }
        }
    }
    return 0;
}
