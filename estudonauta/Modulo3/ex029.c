#include <stdio.h>

void main()
{
    printf("<<< ex029 - PESO EM OUTROS PLANETAS >>>\n\n");

    float peso; int op;

    printf("Qual seu peso [Kg]? ");
    scanf("%f", &peso);

    printf("\n\n\t======================\n");
    printf("\t  Escolha um planeta\n");
    printf("\n\t  1\tLua;");
    printf("\n\t  2\tMercurio;");
    printf("\n\t  3\tVenus;");
    printf("\n\t  4\tMarte;");
    printf("\n\n\t======================\n\n");
    printf("Sua opcao -> ");
    scanf("%i", &op);

    printf("\n\n");
    switch (op)
    {
    case 1:
        printf("Seu peso na Lua e de %.2fKg.", (peso/9.81)*1.622);
        break;

    case 2:
        printf("Seu peso em Mercurio e de %.2fKg.", (peso/9.81)*3.7);
        break;

    case 3:
        printf("Seu peso em Venus e de %.2fKg.", (peso/9.81)*8.87);
        break;

    case 4:
        printf("Seu peso em Marte e de %.2fKg.", (peso/9.81)*3.721);
        break;

    default:
        printf("Opcao invalida!");
        break;
    }

}