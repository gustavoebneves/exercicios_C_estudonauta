#include <stdio.h>
#include <string.h>
#include <locale.h>
void main()
{
    setlocale(LC_ALL, "Portuguese");

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
    printf("Sua situação e: %s", situ);

// -------------------------------------------------------------------------------------------------------------------

// strlen -> diz quantos caracteres uma string tem

    printf("\nO nome Gustavo tem %i letras.", strlen("Gustavo"));

// -------------------------------------------------------------------------------------------------------------------

// strcmp -> comparação entre duas strings
// retorna 1  -> a primeira string é maior
// retorna 0  -> as strings são iguals
// retorna -1 -> a segunda string é maior

    char str1[20] = "Gustavo", str2[20] = "Eliael";

    printf("\n\nResultado da comparacao entre %s e %s: %i.",str1, str2, strcmp(str1, str2)); // primeira maior retorna 1

    strcpy(str1, "Eliael"); strcpy(str2, "Gustavo");
    printf("\nResultado da comparacao entre %s e %s: %i.",str1, str2, strcmp(str1, str2)); // segunda maior retorna -1

    strcpy(str2, "Eliael");
    printf("\nResultado da comparacao entre %s e %s: %i.",str1, str2, strcmp(str1, str2)); // duas iguais retorna 0

// -------------------------------------------------------------------------------------------------------------------

// strcat -> junta uma string com outra (só junta duas)

    char nome_gus[40];

    strcpy(str1, "Gustavo Eliael "); strcpy(str2, "Bonow Neves");

    strcpy(nome_gus, strcat(str1, str2));

    printf("\n\nSeu nome e %s.", nome_gus);

// -------------------------------------------------------------------------------------------------------------------

// strupr -> deixa todas as letras em uma string MAIÚSCULAS (string upper)
// strlwr -> deixa todas as letras em uma string MINÚSCULAS (string lower)

    // quando se usa esses métodos ele já muda a string original, não é só pra visualização
    printf("\n\nSeu nome todo maiusculo e: %s.", strupr(nome_gus));
    printf("\nSeu nome todo minusculo e: %s.", strlwr(nome_gus));
}
