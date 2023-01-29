#include <stdio.h>

void main()
{
    printf("<<< ex020 - PRECO DA PASSAGEM >>>\n\n");

    float dist, tot;

    printf("========= TABELA DE PRECOS ==========\n");
    printf("* Viagens ate 200Km\t R$ 0.50/Km *\n");
    printf("* A partir de 200Km\t R$ 0.35/Km *\n");
    printf("=====================================\n\n");

    printf("Distancia da sua viagem [Km]: ");
    scanf("%f", &dist);

    printf("\n\nUma viagem com distancia de %.2fKm vai custar ", dist);

    if (dist <= 200 && dist > 0)
    {   
        tot = dist * 0.5;
        printf("R$ 0.50/Km\n");
        printf("Valor total da viagem: R$ %.2f.", tot);
    }

    else
    {
        tot = dist * 0.35;
        printf("R$ 0.35/Km\n");
        printf("Valor total da viagem: R$ %.2f.", tot);
    }

}