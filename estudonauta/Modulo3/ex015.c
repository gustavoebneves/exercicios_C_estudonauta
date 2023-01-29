#include <stdio.h>

void main()
{
    printf("<<< ex015 - NOTAS E MEDIA COM SITUACAO >>>\n\n");

    float n1, n2, media;

    printf("Nota 1: ");
    scanf("%f", &n1);
    printf("\nNota 2: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    printf("\n\n-----------------------------------------\n\n");

    if (media >= 7)
    {
        printf("\nMEUS PARABENS! ");
    }

    printf("Sua media final foi %.2f.", media);

    printf("\n\n\n-----------------------------------------\n");
}