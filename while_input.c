#include <stdio.h>

int main()
{
    int n=0;
    printf("Informe um numero\n");

    // se vaor for negativo continua pedindo..
    while (n<=0) {

        if (n!=0) {
            printf("Valor negativo.. = %d\n",n);
        }
        scanf("%d",&n);
        
    }

    //atendeu requisito.. continua programa e encerra com numero positivo validado
    printf("Valor positivo.. tudo ok n = %d\n",n);

    return 0;
}
