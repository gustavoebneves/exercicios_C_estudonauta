#include <stdio.h>

void main()
{
    int x, y;
    x = 5;

    x++;
    printf("%i\n", x);

    x = 5;
    printf("%i\n", x++); // pós incremento 
    // primeiro escreva o valor de x e somente depois faça a soma
    printf("%i\n", x); // x só virou 6 na próxima linha
    

    x = 5;
    printf("%i\n", ++x); // pré incremento 
    // primeiro faça a soma e somente depois escreva o valor de x 
    printf("%i\n", x); // x virou 6 na mesma linha de cima

// -------------------------------------------------------------------------------------------------------------------

    x = 5;
    y = 3 + x++;
    printf("\nX = %i; Y = %i.", x, y); // pós incremento: x = 6; y = 8, x só virou 6 na linha do printf

    x = 5;
    y = 3 + ++x;
    printf("\n\nX = %i; Y = %i.", x, y); // pré incremento: x = 6; y = 9, x virou 6 na linha da atribuição de y
     
}

/*
Operadores de incremento e dcremento

Se o incremento ou o decremento for 1, pode-se utilizar estes operadores. Caso não for, utilizar os de atribuição.

x = x + 1 -> x += 1 -> x++ ou ++x dependendo

y = y - 1 -> y -= 1 -> y-- ou --y dependendo

*/
