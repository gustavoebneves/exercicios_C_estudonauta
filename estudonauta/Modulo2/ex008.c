// mostrar o antecessor e o sucessor de uma letra no alfabeto
#include <stdio.h>
void main()
{
    printf("<<< ex008 - ANTECESSOR E SUCESSOR NO ALFABETO >>>\n\n");

    char letra;

    printf("Insira uma letra para saber seu antecessor e seu sucessor no alfabeto: ");
    letra = getchar();

    printf("\n\nO antecessor da letra %c e a letra %c e o sucessor e %c.", letra, letra - 1, letra + 1);

}