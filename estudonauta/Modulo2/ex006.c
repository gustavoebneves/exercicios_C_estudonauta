// mostrar o antecessor e o sucessor de um número
#include <stdio.h>
void main()
{
    printf("<<< ex006 - ANTECESSOR E SUCESSOR >>>");

    int n;

    printf("\n\nInsira um numero para saber seu antecessor e o seu sucessor: ");
    scanf("%i", &n);

    printf("\n\nO antecessor de %i e %i e o sucessor e %i.\n", n, n-1, n+1);
}