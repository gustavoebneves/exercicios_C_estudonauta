#include <stdio.h>

void main()
{
    printf("<<< ex016 - COMPRAS COM DESCONTO >>>\n\n");

    float total;

    printf("Valor total da compra: ");
    scanf("%f", &total);

    printf("\n\n-----------------------------------------\n\n");
    printf("Voce comprou R$ %.2f na nossa loja.\n\n", total);

    if (total > 500)
    {             // sem isso da erro
        float desc = (float) 10 / 100 * total ;
        printf("================ ATENCAO ================\n\n");
        printf("Por ter comprado mais de R$ 500 no total, \nvoce recebe um desconto de R$ %.2f!\n", desc);
        printf("O valor com desconto ficou em R$ %.2f. ", total - desc);
    }

    printf("\n\nVolte sempre! ");
        printf("\n\n-----------------------------------------\n\n");

}