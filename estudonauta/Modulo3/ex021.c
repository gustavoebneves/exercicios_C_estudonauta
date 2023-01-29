#include <stdio.h>

void main()
{
    printf("<<< ex021 - INVERSO OU OPOSTO >>>\n\n");

    int num;

    printf("Insira um numero positivo ou negativo: ");
    scanf("%i", &num);

    if (num > 0)
    {
        printf("\n\nO inverso do numero %i e o numero %.2f.", num, 1 / (float) num);
    }

    else
    {
        printf("\n\nO oposto do numero %i e o numero %i.", num, -1 * num);
    }
}