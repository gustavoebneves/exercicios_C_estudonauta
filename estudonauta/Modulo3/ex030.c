#include <stdio.h>

void main()
{
    printf("<<< ex030 - PRECO POR TEMPORADA >>>\n\n");

    float preco; int op;

    printf("\tQuantidade da compra: R$ ");
    scanf("%f", &preco);

    printf("\n\n\t======================\n");
    printf("\t  Escolha um periodo\n");
    printf("\n\t1 - Carnaval [+10%%];\n");
    printf("\n\t2 - Ferias de verao [+20%%];\n");
    printf("\n\t3 - Dia das criancas[+5%%];\n");
    printf("\n\t4 - Black Friday[-30%%];\n");
    printf("\n\t5 - Natal [-5%%];\n");
    printf("\n\n\t======================\n\n");
    printf("\tSua opcao -> ");
    scanf("%i", &op);

    printf("\n\n");

    switch (op)
    {
    case 1:
        printf("\tPreco final: R$ %.2f\n", preco + (preco * (float) 10 / 100));
        break;

    case 2:
        printf("\tPreco final: R$ %.2f\n", preco + (preco * (float) 20 / 100));
        break;

    case 3:
        printf("\tPreco final: R$ %.2f\n", preco + (preco * (float) 5 / 100));
        break;

    case 4:
        printf("\tPreco final: R$ %.2f\n", preco - (preco * (float) 30 / 100));
        break;

    case 5:
        printf("\tPreco final: R$ %.2f\n", preco - (preco * (float) 5 / 100));
        break;
    
    default:
        printf("\tPreco padrao: R$ %.2f\n", preco);
        break;
    }

}