// ler nome e duas notas de um aluno e mostrar a media
#include <stdio.h>
void main()
{
    printf("<<< ex009 - MEDIA DO ALUNO >>>\n\n");

    char nome[40]; float n1, n2, media;

    printf("Nome do aluno: ");
    fflush(stdin);
    gets(nome);

    printf("\nPrimeira nota do aluno %s: ", nome);
    fflush(stdin);
    scanf("%f", &n1);

    printf("\nSegunda nota do aluno %s: ", nome);
    fflush(stdin);
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    printf("\n\nO aluno %s tirou a nota %.2f na primeira prova e a nota %.2f na segunda prova.\n", nome, n1, n2);
    printf("Sua media ficou em: %.2f.", media);

}