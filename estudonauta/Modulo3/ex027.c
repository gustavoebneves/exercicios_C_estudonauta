#include <stdio.h>

void main()
{
    printf("<<< ex027 - ORDEM DECRESCENTE 3 NUMEROS >>>\n\n");

    int n1, n2, n3;

    printf("Insira tres numeros: ");
    scanf("%i %i %i", &n1, &n2, &n3);

    if (n1 > n2 && n2 > n3)
    {
        printf("Em ordem decrescente: %i, %i, %i.", n1, n2, n3);
    }

    else if (n1 > n3 && n3 > n2)
    {
        printf("Em ordem decrescente: %i, %i, %i.", n1, n3, n2);
    }

    else if (n2 > n1 && n1 > n3)
    {
        printf("Em ordem decrescente: %i, %i, %i.", n2, n1, n3);
    }

    else if (n2 > n3 && n3 > n1)
    {
        printf("Em ordem decrescente: %i, %i, %i.", n2, n3, n1);
    }

    else if (n3 > n1 && n1 > n2)
    {
        printf("Em ordem decrescente: %i, %i, %i.", n3, n1, n2);
    }

    else if (n3 > n2 && n2 > n1)
    {
        printf("Em ordem decrescente: %i, %i, %i.", n3, n2, n1);
    }

}