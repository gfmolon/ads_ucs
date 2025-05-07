#include <stdio.h>

int main() {

    FILE *arquivo;
    int n, i, cont = 0;

    printf("Informe o valor de n\n");
    scanf("%d", &n);

    arquivo = fopen("arquivo.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
    } else {
        fprintf(arquivo, "Execução do laço.\n");
        fprintf(arquivo, "-----------------------------\n");
        fprintf(arquivo, "primo\tn\ti\n");
        for (i = 1; i <= n; i++) {
            if (n % i == 0) {
                fprintf(arquivo, "S\tn = %d\ti = %d\n", n, i);
                cont++;
            } else {
                fprintf(arquivo, "N\tn = %d\ti = %d\n", n, i);
            }
        }
        fprintf(arquivo, "-----------------------------\n");
    }
    fclose(arquivo);

    return 0;
}
