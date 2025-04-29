#include <stdio.h>

int main() {

    int n, d1, d2, d3, aux;
    printf("Informe um número\n");
    scanf("%d",&n);

    d1 = n / 100;
    d2 = (n / 10) % 10;
    d3 = n % 10;

   if (d1 < d2) {
        aux = d2;
        d2 = d1;
        d1 = aux;
   } 
    
   if (d1 < d3) {
        aux = d3;
        d3 = d1;
        d1 = aux;
   } 

   if (d2 < d3) {
        aux = d2;
        d2 = d3;
        d3 = aux;
   }

    printf("%d %d %d\n", d1, d2, d3);

return 0;
}


