#include <stdio.h>

void main()
{
    int num;

    printf("Insira um numero: ");
    scanf("%i", &num);

    // !!! IMPORTANTE !!!
    // switch case só serve pra int e char

    // jeito errado (sem break)

    printf("\n\nJeito errado sem break: ");
    switch (num) 
    {
    case 1:
        printf("\n\nUm");

    case 2:
        printf("\n\nDois");

    case 3:
        printf("\n\nTres");
    
    default:
        printf("\n\nErro");
    }
    printf("\n\nFIM");

    // jeito certo (com break)

    printf("\n\n\nJeito certo com break: ");
    switch (num) 
    {
    case 1:
        printf("\n\nUm");
        break;

    case 2:
        printf("\n\nDois");
        break;

    case 3:
        printf("\n\nTres");
        break;
    
    default:
        printf("\n\nErro");
        break; // esse break e opcional pq a estrutura ja acabaria de qualquer jeito
    }
    printf("\n\nFIM");
}