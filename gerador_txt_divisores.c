#include <stdio.h>

int main() {

    int i, n;
    FILE *arquivo;

    printf("Informe o número para achar os divisores.\n");
    scanf("%d", &n);

    arquivo = fopen("divisores.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
    }

    fprintf(arquivo, "Divisores de %d:\n", n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            fprintf(arquivo, "%d\n", i);
        }
    }

    fclose(arquivo);
    printf("Arquivo 'divisores.txt' gerado com sucesso!\n");

    return 0;
}
