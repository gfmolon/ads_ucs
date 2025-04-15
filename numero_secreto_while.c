#include <stdio.h>

int main() {
    int numero_secreto = 999;
    int palpite;
    int contador_tentativas = 0;
    int max_tentativas = 5;

    printf("Coloca teu palpite de numero secreto: ");
    scanf("%d", &palpite);
    contador_tentativas++;

    while (palpite != numero_secreto && contador_tentativas < max_tentativas) {
        printf("Tentativa %d:\n", contador_tentativas);
        if (palpite > numero_secreto) {
            printf("Muito alto.. diferença de %d\n", palpite - numero_secreto);
        } else {
            printf("Muito baixo.. diferença de %d\n", numero_secreto - palpite);
        }
        printf("Coloca outro palpite: ");
        scanf("%d", &palpite);
        contador_tentativas++;
    }

    if (palpite == numero_secreto) {
        printf("Parabens, voce acertou! O numero era %d\n", numero_secreto);
    } else {
        printf("Voce perdeu! O numero secreto era %d\n", numero_secreto);
    }

    return 0;
}
