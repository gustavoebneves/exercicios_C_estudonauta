// gerar números aleatórios e comparar com um número inserido pelo usuário
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    srand(time(NULL));

    printf("<<< ex005 - GERADOR DE NUMEROS ALEATORIOS >>>\n\n");

    int n_pc = rand() % 10 + 1, n_user;

    printf("Pense e me diga um numero entre 1 e 10: ");
    scanf("%i", &n_user);

    printf("\n\nEu pensei no numero %i e voce no numero %i.", n_pc, n_user);

}
