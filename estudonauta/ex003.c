// ler nome, idade e peso
#include <stdio.h>
void main()
{
    char nome[40]; int idade; float peso;

    printf("<<< ex003 - ENTRADA DE DADOS >>>\n\n");

    printf("Qual e o seu nome? ");
    gets(nome);

    printf("\n%s, qual e a sua idade? ", nome);
    scanf("%i", &idade);

    printf("\n%s, quanto voce pesa (em Kg)? ", nome);
    scanf("%f", &peso);

    printf("\n\nSeu nome e \"%s\", sua idade e de %i anos e o seu peso e de %.2fKg. Correto? \n", nome, idade, peso);
    // quando se usa o setlocale (pt-br), muda o separador de ponto flutuante **na hora do input** e vira uma ','
    printf("\n---------------------------------------------- FIM ----------------------------------------------");

}