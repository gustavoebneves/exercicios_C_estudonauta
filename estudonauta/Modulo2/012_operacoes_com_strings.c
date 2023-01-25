#include <stdio.h>
#include <string.h>
void main()
{

// strcpy -> atribui strings a variáveis

    float n1, n2, media; char situ[10];

    n1 = 5;
    n2 = 9; 
    media = (n1 + n2) / 2; 

    // usando operador ternário dentro da atribuição de parâmetros
    strcpy(situ, (media>=7)?"Aprovado":"Reprovado"); // igual: strcpy(situ, "Aprovado"):strcpy(situ, "Reprovado");
    // lê-se: se media for maior ou igual a 7, a variavel 'situ' recebe "Aprovado", senão, recebe "Reprovado"
    // strcpy(variável-string, valor atribuido à variável-string)

    printf("\n\nO aluno tirou %.2f na primeira prova e %.2f na segunda. Sua media e %.2f.\n", n1, n2, media);
    printf("Sua situacao e: %s", situ);

// -------------------------------------------------------------------------------------------------------------------

// strlen -> diz quantos caracteres tem uma string em uma variável ou fora de uma
    char nome[10]; int tam;
    strcpy(nome, "Gustavo");

    tam = strlen(nome);
    printf("\n\nO nome %s tem %i letras.", nome, tam);

    printf("\nO nome Gustavo tem %i letras.", strlen("Gustavo"));

// -------------------------------------------------------------------------------------------------------------------
//...

}