#include <stdio.h>
#include <time.h>

void main()
{
    printf("<<< ex022 - CINEMA >>>\n\n");

    int hor_at, hor_filme;
    float din;

    time_t t; //

    time(&t); //

    struct tm *data; //

    data = localtime(&t); //

    hor_at = data -> tm_hour;

    printf("Qual o horario do seu filme? ");
    scanf("%i", &hor_filme);

    printf("\n\n=============== CINEMA ESTUDONAUTA ===============\n");
    printf("Horario do filme: %ih.\t Preco do ingresso: R$ 20.", hor_filme);
    printf("\n==================================================\n\n");

    printf("Quanto dinheiro voce tem? ");
    scanf("%f", &din);
    printf("\nAgora sao %ih.", hor_at);

    if (din >= 20 && hor_at < hor_filme)
    {
        printf("\nVoce consegue comprar o ingresso. Bom filme!\n");
    }

    else
    {
        printf("\nInfelizmente voce nao foi possivel comprar o ingresso.\n");
    }
    
}