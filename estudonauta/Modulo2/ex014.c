#include <stdio.h>
void main()
{
    printf("<<< ex014 - OPERADORES BITWISE DE DESLOCAMENTO >>>\n\n");

    int n1, n2, right, left;
    
    printf("Primeiro numero: ");
    scanf("%i", &n1);
    printf("\nSegundo numero: ");
    scanf("%i", &n2);

    right = n1 << n2; left = n1 >> n2;
    printf("\n\n---- Operacoes Bitwise ----\n\n");
    printf("%i << %i = %i\n", n1, n2, right);
    printf("%i >> %i = %i\n", n1, n2, left);
}