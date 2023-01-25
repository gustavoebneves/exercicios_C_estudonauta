// dizer se um número é par ou ímpar
#include <stdio.h>
void main()
{
    printf("<<< ex011 - PAR OU IMPAR >>>\n\n");
    
    int num;

    printf("Insira um numero: ");
    scanf("%i", &num);

    printf("O numero %i e %s.", num, (num % 2 == 0)?"PAR":"IMPAR");

}