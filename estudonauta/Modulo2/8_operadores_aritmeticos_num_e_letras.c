#include <stdio.h>
void main()
{
    int a = +2, b = -3; // operadores unários
    int c = a + b; // operador binário

// -------------------------------------------------------------------------------------------------------------------

    printf("O resultado da soma entre %i e %i e igual a %i.", a, b, c);
                                  // se colocasse um - antes desse c, o resultado ficaria positivo

// -------------------------------------------------------------------------------------------------------------------

    c = a * b;
    printf("\n\nO resultado da multiplicação entre %i e %i e igual a %i.", a, b, c);

// -------------------------------------------------------------------------------------------------------------------

    a = 7; b = 2;
    c = a / b;
    printf("\n\nO resultado da divisão inteira entre %i e %i e igual a %i.", a, b, c); 
    // ignora se tiver algo depois da ',' pq são inteiros. Mesmo se c fosse declarado como float

    float aa, cc;
    aa = 7;
    cc = aa / b; // uma das variáveis e a variável onde tu vai guardar a operação têm que ser float
    printf("\n\nO resultado da divisão entre %.2f e %i e igual a %.2f.", aa, b, cc); 

    c = a % b;
    printf("\n\nO resto da divisão entre %i e %i e igual a %i.", a, b, c);

// -------------------------------------------------------------------------------------------------------------------

    float preco = 35.55, preco_final;

    preco_final = preco - (preco * 10 / 100);

    printf("\n\nO preço inicial do produto era de R$ %.2f. O desconto foi de 10%%. E o preço final foi de R$ %.2f.", preco, preco_final);

// -------------------------------------------------------------------------------------------------------------------

    // tabela ASCII de caracteres: https://web.fe.up.pt/~ee96100/projecto/Tabela%20ascii.htm

    char letra = 'J';

    printf("\n\nO código ASCII da letra %c e igual a %i.", letra, letra);

    printf("\n\nO código ASCII da letra %c mais 2 e igual a ", letra);
    letra = letra + 2;
    printf("%i.", letra);

    letra = 'A' + 3;
    printf("\n\nA quarta letra do alfabeto e %c.", letra);
}

/*
Operadores aritméticos

+ -> se for colocado antes de um número (+5 ou -8) é um operador unário, se for colocado entre números (5+8) é um operador binário.

- -> se for colocado antes de um número (+5 ou -8) é um operador unário, se for colocado entre números (5+8) é um operador binário.

* -> multiplicação

/ -> divisão
    se for um número inteiro, ele retorna a divisão inteira
    se for um número real, ele retorna a divisão real
    se for misto, ele retorna a divisão real

% -> módulo (resto da divisão)

----------------------------------------------------------------------------------------------------------------------

Ordem de precedência

1º - ()
2º - + ou - DE FORMA UNÁRIA (dar sinal)
3º - * ou / ou %
4º - + ou - DE FORMA BINÁRIA (realizar operações)

*/