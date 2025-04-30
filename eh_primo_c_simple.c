#include <stdio.h>

int main() {

    int n,i, primo_count=0;

    printf("Informe o valor do número:\n");
    scanf("%d",&n);

    for(i=1; i<=n; i++) {
        if(n % i == 0) {
            primo_count++;
        }
    } 

    if (primo_count == 2) {
       printf("%d é primo.\n",n); 
    } else {
       printf("%d não é primo.\n",n);
    }


return 0;
}


