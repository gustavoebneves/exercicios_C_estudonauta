#include <stdio.h>
void main()
{
    float n1, n2, media; char situ[20];

    n1 = 5; n2 = 9; media = (n1 + n2) / 2; 

    // situ = (media>=7)?"Aprovado":"Reprovado";
    // lê-se: se media for maior ou igual a 7, a variavel 'situ' recebe "Aprovado", senão, recebe "Reprovado"
    // logicamente está certo, mas a atribuição de strings a uma variável é diferente (próx. aula)

    printf("A situacao do aluno e: %s.", (media>=7)?"Aprovado":"Reprovado");

    n1 = 2; n2 = 9; media = (n1 + n2) / 2;
    printf("\n\nA situacao do aluno e: %s.", (media>=7)?"Aprovado":"Reprovado");

// -------------------------------------------------------------------------------------------------------------------

    int prim, segu;
    printf("\n\nInsira o primeiro numero: ");
    scanf("%i", &prim);

    printf("Insira o segundo numero: ");
    scanf("%i", &segu);

    int maior = (prim>segu)?prim:segu;
    // se eles forem iguais, só se resolve com 'if'
    printf("Entre %i e %i o maior entre eles e %i.", prim, segu, maior);

// -------------------------------------------------------------------------------------------------------------------

    // é possível atribuir uma expressão com o operador ternário
    int a = 5,b = 6, c;

    c = (a > b)?(a*2):(b+5);
    // nesse caso, como a condição é falsa, a variável 'c' recebe a segunda expressão (c = 11)

    printf("\n\nC = %i.", c);

    a = 7; c = (a > b)?(a*2):(b+5);
    // já neste caso, como a condição é verdadeira, a variável 'c' recebe a primeira expressão (c = 14)
    printf("\n\nC = %i.", c);


}