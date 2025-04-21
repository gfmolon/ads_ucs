#include <stdio.h>

int main() {
    // numeros pares de 1 a 50

    int numero_minimo;
    int numero_maximo=50;

    for(numero_minimo=1;numero_minimo <= numero_maximo; numero_minimo++) {
        if (numero_minimo % 2 == 0) {
        printf("Números: %d\n",numero_minimo);
        }
    }

return 0;
}


