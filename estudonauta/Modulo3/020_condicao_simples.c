#include <stdio.h>

void main()
{
    float vel;

    printf("Qual sua velocidade? "); // sempre acontece
    scanf("%f", &vel); // sempre acontece

    if (vel > 80) // condição. não precisa de ;
    {
        printf("\n\nVoce foi multado!\n"); // só acontece se a condição for satisfeita
    }

    printf("Dirija com cuidado!"); // sempre acontece
}