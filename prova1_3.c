#include <stdio.h>
#include <wchar.h>

int main() {

    int di,mi,ai;
    int da,ma,aa,tempo;
    float valor_mens;

    printf("Informe o dia, mês e ano inicial.\n");
    scanf("%d%d%d",&di,&mi,&ai);

    printf("Informe o dia, mês e ano atual.\n");
    scanf("%d%d%d",&da,&ma,&aa);

    printf("Valor da mensalidade.\n");
    scanf("%f",&valor_mens);

    tempo = aa - ai;

    if (ma<mi || (ma==mi && da<di) ) {
        tempo -=1;
    }

    if (tempo <= 1) {
    } else if ( tempo <= 3) {
        valor_mens = valor_mens*0.95;
    } else if ( tempo <= 5) {
        valor_mens = valor_mens*0.9;
    } else {
        valor_mens = valor_mens*0.85;
    }

    printf("Tempo de contrato: %d\n",tempo);
    printf("Valor: R$ %.2f",valor_mens);

return 0;
}


