#include <stdio.h>
#define TOTAL3 30 // OUTRA FORMA DE DEFINIR UMA CONSTANTE
void main()
{
    int TOTAL1 = 10; // variável -> muda de valor
    printf("%i", TOTAL1);
    TOTAL1 = 9;
    printf("\n%i\n", TOTAL1); 

    const int TOTAL2 = 20; // constante -> valor fixo
    printf("%i\n", TOTAL2);
    // TOTAL2 = 9; vai dar erro

    printf("%i", TOTAL3);
}

/*
-----------------------------------------------------------------------------------
------------------------- DIFERENÇAS ENTRE DEFINE E CONST -------------------------
-----------------------------------------------------------------------------------

- #define é uma diretiva de pré-processamento

- const é uma palavra reservada do C

- Com #define, o valor é substituído antes da compilação (não existe na memória)

- com const, a constante existe na memória

- Com const é possível indicar o tipo primitivo da constante
-----------------------------------------------------------------------------------
-----------------------------------------------------------------------------------
-----------------------------------------------------------------------------------
*/