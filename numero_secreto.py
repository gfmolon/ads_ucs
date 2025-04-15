
int main()
{
    int numero_secreto = 4;
    int palpite;
    int tentativa =4;

    printf("Coloca teu palpite de número secreto:");
    scanf("%d",&palpite);

    while(numero_secreto != palpite && tentativa > 0) {
        printf("Tentativa: ----->>> %d\n", 5-tentativa);
        if (palpite > numero_secreto) {
            printf("Muito alto.. diferença de %d\n", palpite-numero_secreto );
        } else if (palpite < numero_secreto) {
            printf("Muito baixo.. diferença de %d\n", numero_secreto-palpite);
        }
        --tentativa;
        scanf("%d", &palpite);
    }

    printf("Parabéns, você acertou!, o numero é %d", numero_secreto);
    return 0;
}
