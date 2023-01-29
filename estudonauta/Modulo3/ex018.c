#include <stdio.h>
#include <time.h>

void main()
{
    printf("<<< ex018 - SERVICO MILITAR V0.1 >>>\n\n");

    time_t t; //

    time(&t); //

    struct tm *data; //

    data = localtime(&t); //

    int ano_atual = data -> tm_year + 1900; //

    int ano_nasc;

    printf("Em que ano voce nasceu? ");
    scanf("%i", &ano_nasc);

    int idade = ano_atual - ano_nasc;

    printf("\n\nVoce tem %i anos de idade. ", idade);

    if (idade > 17)
    {
        printf("Espero que voce ja tenha se alistado! ");
    }

    else
    {
        printf("Voce ainda nao pode se alistar!");
    }
}