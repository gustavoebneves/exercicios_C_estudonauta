#include <stdio.h>

void main()
{
    int n = 12 >> 2;
    // apaga dois bits da direita pra esquerda

    printf("O resultado foi %i.\n\n", n); // 3

    n = 12 << 2;
    // adiciona dois zeros da direita pra esquerda

    printf("O resultado foi %i.\n\n", n); // 48

}

/*
Operadores Bit a Bit ou Operadores Bitwise de deslocamento

<< -> left shift

>> -> right shift

*/