#include <stdio.h>

int main()
{

    int n, cont_divisores=0;
    printf("Informe um número");
    scanf("%d",&n);

    for (int i=1;i<=n; i++) {
       if (n%i == 0) {
        cont_divisores++;
       }
    }

    printf("%d",cont_divisores);
    

return 0;
}


