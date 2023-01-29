#include <stdio.h>
#include <time.h>

void main()
{
    printf("<<< ex017 - IDADE / FILA DE BANCO >>>\n\n");
    
    time_t t; //

    time(&t); //

    struct tm *data; //

    data = localtime(&t); //

    int ano_atual = data -> tm_year + 1900; //

    int ano_nasc;

    printf("Em que ano voce nasceu? ");
    scanf("%i", &ano_nasc);

    int idade = ano_atual - ano_nasc;

    printf("\n\n-----------------------------------------\n\n");
    printf("Voce tem %i anos. Certo? ", idade);
    printf("\nBem vindo(a) ao bando Estudonauta! ");

    if (idade >= 65)
    {
        printf("\n\nATENCAO! Dirija-se a fila preferencial! ");
    }

    printf("\n\n-----------------------------------------\n\n");

}