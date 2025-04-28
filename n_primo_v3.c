#include <stdio.h>

int main()

{

    int ehprimo=1, n;
    printf("Informe N\n");
    scanf("%d",&n);

    if (n<= 1) {
        printf("Não é primo.");
    } else {
    
        for (int x=2; x<n; x++) {
            if (n % x == 0) {
                ehprimo = 0;
                break;
            }

        }

    }
    if (ehprimo == 1) {
        printf("É primo.");
    }

return 0;
}

// SHIFT + 4 > final da linha selecao
// SHIFT + V -> Seleciona o bloco inteiro de codigo

