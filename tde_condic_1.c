#include <stdio.h>

void main()
{

    int n;
    int d1, d2, d3, d4;

    int repetidos = 0;
    int consecutivos = 0;

    printf("Informe um número de 4 dígitos como senha:\n");
    scanf("%d", &n);

    if (n < 1000 || n > 9999)
    {
        printf("Por favor, insira um número de 4 dígitos!\n");
        return;
    }

    d1 = (n / 1000) % 10;
    d2 = (n / 100) % 10;
    d3 = (n / 10) % 10;
    d4 = n % 10;

    printf("%d%d%d%d\n", d1, d2, d3, d4);

    if (d1 == d2 || d1 == d3 || d1 == d4 ||
        d2 == d3 || d2 == d4 || d3 == d4)
    {
        repetidos = 1;
    }

    if ((d1 - d2 == 1 || d2 - d1 == 1) ||
        (d2 - d3 == 1 || d3 - d2 == 1) ||
        (d3 - d4 == 1 || d4 - d3 == 1))
    {
        consecutivos = 1;
    }

    if (repetidos && consecutivos)
    {
        printf("Contém algarismos repetidos e consecutivos.\n");
    }
    else if (repetidos)
    {
        printf("Contém algarismos repetidos.\n");
    }
    else if (consecutivos)
    {
        printf("Contém algarismos consecutivos.\n");
    }
    else
    {
        printf("Não contém nenhum dos dois.\n");
    }
}
