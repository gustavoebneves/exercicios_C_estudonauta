#include <stdio.h>

void main()
{
    int a = 4, b = 3, c = 2;

    printf("%s\n\n", (a > b)?"True":"False"); // a é maior que b?

    printf("%s\n\n", (a > b && a > c)?"True":"False"); // a é maior que b E a é maior que c?

    c = 5;
    printf("%s\n\n", (a > b && a > c)?"True":"False"); // a é maior que b E a é maior que c?

// -------------------------------------------------------------------------------------------------------------------

    printf("%s\n\n", (a > b || a > c)?"True":"False"); // a é maior que b OU a é maior que c?

    c = 2; b = 5;
    printf("%s\n\n", (a > b || a > c)?"True":"False"); // a é maior que b OU a é maior que c?

    c = 5;
    printf("%s\n\n", (a > b || a > c)?"True":"False"); // a é maior que b OU a é maior que c?

// -------------------------------------------------------------------------------------------------------------------

    a = 5, b = 4, c = 2;

    printf("%s\n\n", (a > b || a < c && !c != 4)?"True":"False");
    // seguindo a ordem de precedência...
    // !c != 4 -> False
    // a < c && False ->  False
    // a > b || False -> True || False
    // Resultado: True
}

/*
Operadores lógicos

&& -> operador de conjuncão (and - e)

|| -> disjunção (or - ou)

! -> negação (not - não) (inverte o estado)

  TABELA VERDADE " ! "
    _______________
    | var  | !var |
    ---------------
    |  V   |   F  |
    ---------------
    |  F   |   V  |
    ---------------

Ordem de precedência dos operadores lógicos

1º -> negação (!)

2º -> conjunção (&&)

3º -> disjunção (||)

*/