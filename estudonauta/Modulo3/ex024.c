#include <stdio.h>

void main()
{
    printf("<<< ex024 - ORDEM CRESCENTE >>>\n\n");

    float n1, n2;

    printf("Insira dois numeros e eu os colocarei em ordem crescente: ");
    scanf("%f %f", &n1, &n2);

    if (n1 > n2)
    {
        printf("\n\nEm ordem: %.2f e %.2f.", n2, n1);
    }

    else
    {
        if (n1 < n2)
        {
           printf("\n\nEm ordem: %.2f e %.2f.", n1, n2);
        }

        else
        {
            printf("\n\n%.2f e %.2f sao iguais.", n2, n1);
        }
    }

}