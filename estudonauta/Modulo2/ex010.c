// calcular o desconto em um produto
#include <stdio.h>
void main()
{
    printf("<<< ex010 - DESCONTO EM UM PRODUTO >>>\n\n");

    char nome[20]; float preco; int desc;

    printf("Nome do produto: ");
    gets(nome);

    printf("\nPreco de %s: R$ ", nome);
    scanf("%f", &preco);

    printf("\nDesconto: [%%] ");
    scanf("%i", &desc);

    printf("\n\nO produto %s, que custava R$ %.2f, com o desconto de %i%% agora passa a custar R$ %.2f.", nome, preco, desc, preco - (preco * ((float) desc/100)));
                                // se não forcar 'desc' a se comportar como float a conta da errado

}