#include <stdio.h>

int main()

{
    int n;

    printf("Teste número-primo:");
    scanf("%d",&n);

    if (n<= 1) {
        printf("Não é primo.\n");
        return 0;
    }

    for(int i=2;i<n;i++){
        if(n%i==0){
            printf("Não é primo.\n");
            return 0;
        }

    }
    printf("Número Primo.\n");

 
return 0;
}


