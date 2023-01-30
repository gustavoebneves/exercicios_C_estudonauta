#include <stdio.h>

void main()
{
    printf("<<< ex028 - MINI CALCULADORA >>>\n\n");

    int n1, n2;
    char op;

    printf("Insira dois numeros: ");
    scanf("%i %i", &n1, &n2);

    printf("\n\n=======================\n\n");
    printf(" + \t Adicao\n - \t Subtracao\n * \t Multiplicacao\n / \t Divisao");
    printf("\n\n=======================\n\n");

    printf("O que voce quer fazer com esses numeros? ");
    fflush(stdin);
    op = getchar();

    printf("\n\n");
    switch (op)
    {
    case '+':
        printf(" %i + %i = %i", n1, n2, n1 + n2);
        break;

    case '-':
        printf(" %i - %i = %i", n1, n2, n1 - n2);
        break;

    case '*':
        printf(" %i x %i = %i", n1, n2, n1 * n2);
        break;

    case '/':
        printf(" %i / %i = %.1f", n1, n2, (float) n1 / n2);
        break;
    
    default:
        printf("Opcao invalida!");
        break;
    }

    printf("\n\nAcabou!\n\n");
}