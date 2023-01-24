#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    srand(time(NULL)); // srand -> start rand
    int n_aleatorio;

    n_aleatorio = rand(); // gera um número grande
    printf("Numero gerado: << %i >>.\n\n", n_aleatorio);

    n_aleatorio = rand() % 10; // gera um número entre 0 e 9
    printf("Numero gerado: << %i >>.\n\n", n_aleatorio);

    n_aleatorio = rand() % 20 + 1; // gera um número entre 1 e 20
    printf("Numero gerado: << %i >>.", n_aleatorio);
}