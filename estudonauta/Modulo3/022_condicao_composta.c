#include <stdio.h>

void main()
{
    int num;

    printf("Numero: ");
    scanf("%i", &num);

    if (num % 2 == 0)
    {
        printf("\n\n%i E PAR!", num);
    }
    
    else
    {
        printf("\n\n%i E IMPAR!", num);
    }

    printf("\n\nACABOU!");
}