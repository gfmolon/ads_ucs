#include <stdio.h>

void main()
{
    int h1, m1, h2, m2, h3, m3; 
    int t1, t2, t3;             
    int temp;                   

    // Solicita os horários
    printf("Informe os horarios disponiveis:\n");

    printf("Horario 1 (hora minuto): ");
    scanf("%d %d", &h1, &m1);

    printf("Horario 2 (hora minuto): ");
    scanf("%d %d", &h2, &m2);

    printf("Horario 3 (hora minuto): ");
    scanf("%d %d", &h3, &m3);

    t1 = h1 * 60 + m1;
    t2 = h2 * 60 + m2;
    t3 = h3 * 60 + m3;

    if (t1 < t2) { 
        temp = t1;
        t1 = t2;
        t2 = temp;

        temp = h1;
        h1 = h2;
        h2 = temp;
        temp = m1;
        m1 = m2;
        m2 = temp;
    }
    if (t2 < t3) { 
        temp = t2;
        t2 = t3;
        t3 = temp;
        temp = h2;
        h2 = h3;
        h3 = temp;
        temp = m2;
        m2 = m3;
        m3 = temp;
    }
    if (t1 < t2) { 
        temp = t1;
        t1 = t2;
        t2 = temp;
        temp = h1;
        h1 = h2;
        h2 = temp;
        temp = m1;
        m1 = m2;
        m2 = temp;
    }

    printf("\nHorarios em ordem decrescente:\n");
    printf("%02d:%02d\n", h1, m1);
    printf("%02d:%02d\n", h2, m2);
    printf("%02d:%02d\n", h3, m3);  
}
