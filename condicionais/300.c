#include <stdio.h> 
#include <math.h> // Necessário para usar a função sqrt (raiz quadrada)

void main()
{
    float v1, v2, v3; 
    float x1, x2, delta; 

    printf("Digite o coeficiente a: ");
    scanf("%f", &v1);
    printf("Digite o coeficiente b: ");
    scanf("%f", &v2);
    printf("Digite o coeficiente c: ");
    scanf("%f", &v3);

    delta = v2 * v2 - 4 * v1 * v3;


    if (delta < 0) {
        printf("A equacao nao possui raizes reais\n");
    }
    else {
     
        x1 = (-v2 + sqrt(delta)) / (2 * v1);
        x2 = (-v2 - sqrt(delta)) / (2 * v1);

        if (x1 < x2) {
            printf("Raizes: %.2f e %.2f\n", x1, x2);
        }
        else {
            printf("Raizes: %.2f e %.2f\n", x2, x1);
        }
    }
}
