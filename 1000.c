/*
S00001000) Faça um algoritmo que le um valor entre 0 e 9999 e calcula a soma dos seus dígitos.
Dica:O dígito menos significativo de um número inteiro pode ser obtido pelo resto da divisão 
do número por 10. Os dígitos restantes podem ser obtidos pela divisão inteira por 10.
*/

//1000 para obter primeiro digito. Ex 8135 / 1000 = 8

void main()
{
         int n,d1,d2,d3,d4,s;

         printf("Digite o numero:\n");
         scanf("%d",&n);

         d1 = n /1000;
         d2 = (n % 1000) / 100;
         d3 = n%100 / 10; 
         d4 = n % 10;

         s = d1+d2+d3+d4;
         printf("Soma: %d\n",s);
         
}
