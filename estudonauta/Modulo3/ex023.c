#include <stdio.h>

void main()
{
    printf("<<< ex023 - NEGATIVO, POSITIVO OU NULO >>>\n\n");

    float num;

    printf("Insira um numero: ");
    scanf("%i", &num);

    if (num > 0)
    {
        printf("\nO numero inserido e positivo.");
    }

    else
    {
        if (num < 0)
        {
            printf("\nO numero inserido e negativo.");
        }
        else
        {
            printf("\nO numero inserido e nulo.");
        }
    }
}