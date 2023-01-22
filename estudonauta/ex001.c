#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("<<< ex001 - LISTAGEM DE ALUNOS >>>\n\n");
    printf("Listagem de alunos\nNome\t\tNota\n--------------------\n");
    printf("Ana Beatriz\t8.5\nBianca Martins\t9.0\nCláudio Sá\t5.5\nGiovana Silva\t7.5\n");
}