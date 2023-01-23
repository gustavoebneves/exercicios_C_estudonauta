// ler nome, sexo e nota e mostrar de forma tabular
#include <stdio.h>
void main()
{
    printf("<<< ex004 - CADASTRO DE PESSOAS >>>");
    
    char nome[40], sexo; float nota;

    printf("\n\nCADASTRANDO A PRIMEIRA PESSOA\n\n");
    printf("Nome: ");
    gets(nome);

    printf("\nSexo [M/F]: ");
    fflush(stdin);
    sexo = getchar();

    printf("\nNota: ");
    scanf("%f", &nota);
// ----------------------------------------------------

    char nome2[40], sexo2; float nota2;

    printf("\n\nCADASTRANDO A SEGUNDA PESSOA\n\n");
    printf("Nome: ");
    fflush(stdin);
    gets(nome2);

    printf("\nSexo [M/F]: ");
    fflush(stdin);
    sexo2 = getchar();

    printf("\nNota: ");
    scanf("%f", &nota2);
// ----------------------------------------------------

    char nome3[40], sexo3; float nota3;

    printf("\n\nCADASTRANDO A TERCEIRA PESSOA\n\n");
    printf("Nome: ");
    fflush(stdin);
    gets(nome3);

    printf("\nSexo [M/F]: ");
    fflush(stdin);
    sexo3 = getchar();

    printf("\nNota: ");
    scanf("%f", &nota3);
// ----------------------------------------------------

    printf("\n\n----------------- LISTAGEM COMPLETA -----------------\n");
    printf("NOME\t\t\t\t\tSEXO\tNOTA\n");
    printf("%-40s%c\t%3.1f\n", nome, sexo, nota);
    printf("%-40s%c\t%3.1f\n", nome2, sexo2, nota2);
    printf("%-40s%c\t%3.1f\n", nome3, sexo3, nota3);
          // ^^^ alinha com 40 espaços à esquerda
}