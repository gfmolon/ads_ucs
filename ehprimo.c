#include <stdio.h>

int main() {

    int n, ehprimo=1;
    printf("Informe n\n");
    scanf("%d",&n);

    if (n <= 1) {
        printf("Não é primo.\n");
    } else {
        for(int x=2;x<n;x++) {
            if(n % x == 0) {
                ehprimo = 0;
                break;
            }
        }
    }

    printf("É primo? %d\n",ehprimo);

return 0;
}


