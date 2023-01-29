#include <stdio.h>

void main()
{
    printf("<<< ex019 - ANO BISSEXTO >>>\n\n");

    int ano;

    printf("Insira um ano: ");
    scanf("%i", &ano);
    
    printf("\n\nO ano %i", ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
    {   
        printf(" e Bissexto!");
    
    }

    else
    {
        printf(" nao e Bissexto!");
        
    }

}


