#include <stdio.h>

void main()
{
    int n = 25 & 12;

    printf("O resultado foi %i.\n\n", n); // 8

    n = 25 | 12;

    printf("O resultado foi %i.\n\n", n); // 29

    n = 25 ^ 12;

    printf("O resultado foi %i.\n\n", n); // 21
}

/*
Operadores Bit a Bit ou Operadores Bitwise

& -> conjunção

| -> disjunção

^ -> disjunção exclusiva

*/