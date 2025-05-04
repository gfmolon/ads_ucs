#include <stdio.h>

int main() {
    // Descobrir se um número é primo.

    int n, i, contador = 0;
    while (1) {
        printf("Informe o número\n");
        scanf("%d", &n);

        if (n > 1) {
            for (i = 1; i <= n; i++) {
                if (n % i == 0) {
                    contador++;
                }
            }
        } else {
            printf("Erro\n");
            return 0;
        }

        if (contador == 2) {
            printf("%d é primo!\n", n);
        } else {
            printf("%d não é primo!\n", n);
        }
    }
    return 0;
}
