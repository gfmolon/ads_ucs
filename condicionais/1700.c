#include <stdio.h>

void main()
{
    int d1, m1, a1; // Primeira data
    int d2, m2, a2; // Segunda data

    printf("Informe dia, mes e ano da primeira data: ");
    scanf("%d%d%d", &d1, &m1, &a1);
    printf("Informe dia, mes e ano da segunda data: ");
    scanf("%d%d%d", &d2, &m2, &a2);

    // Caso 1: Anos diferentes
    if (a1 < a2) {
        printf("%02d/%02d/%d %02d/%02d/%d", d1, m1, a1, d2, m2, a2);
    }
    else if (a2 < a1) {
        printf("%02d/%02d/%d %02d/%02d/%d", d2, m2, a2, d1, m1, a1);
    }
    // Caso 2: Anos iguais
    else {
        // Caso 2.1: Anos iguais, meses diferentes
        if (m1 < m2) {
            printf("%02d/%02d/%d %02d/%02d/%d", d1, m1, a1, d2, m2, a2);
        }
        else if (m2 < m1) {
            printf("%02d/%02d/%d %02d/%02d/%d", d2, m2, a2, d1, m1, a1);
        }
        // Caso 2.2: Anos iguais, meses iguais
        else {
            if (d1 <= d2) {
                printf("%02d/%02d/%d %02d/%02d/%d", d1, m1, a1, d2, m2, a2);
            }
            else {
                printf("%02d/%02d/%d %02d/%02d/%d", d2, m2, a2, d1, m1, a1);
            }
        }
    }
}

}
