#include <stdio.h>
void main()
{
    printf("<<< ex013 - OPERADORES BITWISE DE DESLOCAMENTO >>>\n\n");

    int n1, n2, rsh, rlf;

    printf("Primeiro numero: ");
    scanf("%i", &n1);
    printf("\nSegundo numero: ");
    scanf("%i", &n2);

    rsh = n1 << n2; rlf = n1 >> n2;
    printf("\n\n---- Operacoes Bitwise ----\n\n");
    printf("%i << %i = %i\n", n1, n2, rsh);
    printf("%i >> %i = %i\n", n1, n2, rlf);
}