#include <stdio.h>
#include <string.h>

void main()
{
    printf("<<< ex026 - ESTADO BR >>>\n\n");

    char estado[10];

    printf("Em qual estado voce nasceu [sigla]? ");
    fflush(stdin); gets(estado); strupr(estado);


    if (strcmp(estado, "RS") == 0)
    {
        printf("\n\nNascendo no Rio Grande do Sul voce e GAUCHO!");
    }

    else if (strcmp(estado, "SP") == 0)
    {
        printf("\n\nNascendo em Sao Paulo voce e PAULISTA!");
    }
    else if (strcmp(estado, "RJ") == 0)
    {
        printf("\n\nNascendo no Rio de Janeiro voce e CARIOCA!");
    }

    else if (strcmp(estado, "RN") == 0)
    {
        printf("\n\nNascendo no Rio Grande do Norte voce e POTIGUAR!");
    }
    // pode ter quantos quiser

    else
    {
        printf("\n\nMe desculpe... Mas eu ainda nao sei como chamar alguem que nasce em %s :(", estado);
    }
    
}