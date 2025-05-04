#include <stdio.h>

int main() {

    // fatorial
    int n, i, mult;

    while (1) {

        printf("Informe um número\n");
        scanf("%d", &n);

        mult = 1;
        if (n >= 0) {
            for (i = 1; i <= n; i++) {
                mult *= i;
            }
            printf("O fatorial de %d é %d.\n", n, mult);

        } else {
            printf("Erro.\n");
            break;
        }
    }
    return 0;
}
