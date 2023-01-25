// mostrar o dobro e a terça parte de um número 
#include <stdio.h>

void main()
{
    printf("<<< ex007 - DOBRO E TERCA PARTE >>>");

    int n;
    printf("\n\nInsira um numero para saber o seu dobro e sua terca parte: ");
    scanf("%i", &n);

    printf("\n\nO dobro do numero %i e %i e sua terca parte e %.2f.", n, n*2, (float) n/3);

}