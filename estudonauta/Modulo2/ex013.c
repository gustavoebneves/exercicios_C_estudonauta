#include <stdio.h>
void main()
{
    printf("<<< ex013 - OPERADORES BITWISE >>>\n\n");

    int n1, n2, rconj, rdisj, rdisjex;

    printf("Primeiro numero: ");
    scanf("%i", &n1);
    printf("\nSegundo numero: ");
    scanf("%i", &n2);

    rconj = n1 & n2; rdisj = n1 | n2; rdisjex = n1 ^ n2;

    printf("\n\n---- Operacoes Bitwise ----\n\n");
    printf("%i & %i = %i\n", n1, n2, rconj);
    printf("%i | %i = %i\n", n1, n2, rdisj);
    printf("%i ^ %i = %i\n", n1, n2, rdisjex);

}