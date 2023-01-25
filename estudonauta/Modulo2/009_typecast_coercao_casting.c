#include <stdio.h>

void main()
{
    int a = 5;
    int b = 2;
    float c = 5 / 2;  // ou float c = (float) 5 / (float) 2;

    printf("O resultado inteiro e: %.2f.", c);

    c = (float) 5 / 2;

    printf("\n\nO resultado real e: %.2f.",c);


// -------------------------------------------------------------------------------------------------------------------

    // é possível forçar uma variável a se comportar como outro tipo em um printf

    int d = 5;

    printf("\n\nQuando eu tento imprimir um numero int como um float assim %%f, ele me mostra 0.000000.\nEx.: %f.",d);
    printf("\nAgora se eu forco esse numero a se comportar como um float, ele me mostra o numero real.\nVamos tentar com o numero %i. Ex.: %f.", d, (float) d); // sem forçar e forçando

// -------------------------------------------------------------------------------------------------------------------

    // também é possível forçar uma variável numérica a ser um caractere

    int numero = 65;

    printf("\n\nO codigo %i segundo a tabela ASCII e a letra %c.", numero, (char) numero);

}