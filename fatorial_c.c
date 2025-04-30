//fatorial

#include <stdio.h>

int main() {

    int x,i,fat=1;

    printf("Informe o número para gerar o fatorial.\n");
    scanf("%d",&x);

    for(i=1;i<=x;i++) {
        fat *=i; 
    }

    printf("O fatorial de %d é %d",x,fat);

return 0;
}


