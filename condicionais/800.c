#include <stdio.h>

int main() {
    int v1, v2, v3, v4;
    int maior1, maior2, maior3;

    printf("Informe os 4 valores:\n");
    scanf("%d%d%d%d", &v1, &v2, &v3, &v4);

    if (v1 >= v2 && v1 >= v3) {
        maior1 = v1;
        if (v2 >= v3) {
            maior2 = v2;
            maior3 = v3;
        } else {
            maior2 = v3;
            maior3 = v2;
        }
    } else if (v2 >= v1 && v2 >= v3) {
        maior1 = v2;
        if (v1 >= v3) {
            maior2 = v1;
            maior3 = v3;
        } else {
            maior2 = v3;
            maior3 = v1;
        }
    } else {
        maior1 = v3;
        if (v1 >= v2) {
            maior2 = v1;
            maior3 = v2;
        } else {
            maior2 = v2;
            maior3 = v1;
        }
    }

    if (v4 > maior1) {
        maior3 = maior2;
        maior2 = maior1;
        maior1 = v4;
    } else if (v4 > maior2) {
        maior3 = maior2;
        maior2 = v4;
    } else if (v4 > maior3) {
        maior3 = v4;
    }

    printf("Os 3 maiores valores em ordem decrescente sao:\n");
    printf("%d %d %d\n", maior1, maior2, maior3);

    return 0;
}
