#include <stdio.h>

int main()
{
    int numero;
    int contador;
    printf("Informe o valor de N:\n");
    scanf("%d",&numero);
    
// aqui tem que prestar atencao, pois eu esta fazendo os multiplicadores e nao os divisores do numero.
    for(contador=1; contador<=numero; contador++) {
        if (numero % contador == 0) {
            printf("ok -> %d\n",contador);
        }
    }
    
}


