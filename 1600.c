#include <stdio.h>

int main() 
{


int maior=0, menor=0, n;

printf("Digite um número. Primeira tentativa\n");
scanf("%d",&n);
maior = n;
menor = n;

for(int x=2;x<=10;x++) {

    printf("Digite um número. Tentativa %d\n",x);
    scanf("%d",&n);

    if (n>maior) {
        maior = n;
    }
    if (n<menor) {
        menor = n;
    }

}


printf("Maior: %d\n", maior);
printf("Menor: %d\n", menor);

return 0;
}


