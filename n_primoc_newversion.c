#include <stdio.h>

int main() {

    int n,i, cont=0, primo;
    printf("Informe um número\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++) {
        if(n % i ==0) {
            cont++;
        } 
    }

    if (cont == 2) {
        primo = 1;
    } else {
        primo = 0;
    }

    printf("%d",primo);

return 0;
}


