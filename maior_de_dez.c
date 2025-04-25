#include <stdio.h>


int main() 
{

int maiordedez=0, novo_numero;

for (int x=1;x<=10;x++) {
    printf("Digite um número: tentativa..%d",x);
    scanf("%d",&novo_numero);

    if (novo_numero > maiordedez) {
        maiordedez = novo_numero;
    }
}

printf("O maior de todos é %d",maiordedez);

return 0;
}


