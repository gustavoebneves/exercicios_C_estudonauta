#include <stdio.h>
#include <time.h>

void main()
{
    printf("<<< ex024 - EXERCICIO MILITAR V2.0 >>>\n\n");

    int idade, ano_at, ano_nasc;

    time_t t; //

    time(&t); //

    struct tm *data; //

    data = localtime(&t); //

    ano_at = data -> tm_year + 1900;

    printf("Atualmente estamos no ano de %i.", ano_at);

    printf("\nInsira seu ano de nascimento: ");
    scanf("%i", &ano_nasc);

    idade = ano_at - ano_nasc;

    printf("\n======================================================\n\n");

    printf("Sua idade atual e de %i anos.\n", idade);

    if (idade > 18)
    {
        int passaram = idade - 18, ano_al = ano_at - passaram;
        printf("Seu alistamento foi em %i. Ja se passaram %i anos.", ano_al, passaram);
    }

    else
    {
        if (idade < 18)
        {
            int faltam = 18 - idade, ano_al = ano_at + faltam; 
            printf("Seu alistamento sera em %i. Ainda faltam %i anos.", ano_al, faltam);
        }

        else
        {
            printf("Voce completa 18 anos este ano. Va se alistar agora!!");
        }

    }

    printf("\n\n======================================================");

    
}