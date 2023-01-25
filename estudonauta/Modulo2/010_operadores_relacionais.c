#include <stdio.h>
void main()
{
    int a = 5, b = 6;
    int c = (a == b);

    printf("C = %i = False", c);

    b = 5; c = (a == b);
    printf("\n\nC = %i = True", c);

    c = a <= b + 2;
    // executa a aritmética primeiro
    printf("\n\nC = %i = True", c);
}

/*
Operadores relacionais

Os operadores relacionais SEMPRE retornam um valor lógico:

!!! IMPORTANTE !!!

*****************
*   true = 1    *
*               *
*   false = 0   *
*****************

!!! IMPORTANTE !!!


== -> igual (= -> recebe (operador de atribuição))

!= -> diferente

> -> maior

< -> menor 

>= maior OU igual

<= menor OU igual

*/