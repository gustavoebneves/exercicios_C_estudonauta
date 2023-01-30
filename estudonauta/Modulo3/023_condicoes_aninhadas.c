#include <stdio.h>

void main()
{
    int n1, n2;

    printf("Insira dois numeros: ");
    scanf("%i %i", &n1, &n2);

    if (n1 > n2)
    {
        printf("\nEntre %i e %i, %i e maior.", n1, n2, n1);
    }

    else
    {
        if (n2>n1) // aninhamento
        {
            printf("\nEntre %i e %i, %i e maior.", n1, n2, n2);
        }

        else
        {
            printf("\nVoce inseriu dois numeros iguais.");
        }
    }

    printf("\n\nFIM\n");
}