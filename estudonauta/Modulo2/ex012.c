// media aprovado/reprovado

#include <stdio.h>
void main()
{
    printf("<<< ex012 - MEDIA APROVADO/REPROVADO >>>\n\n");

    float n1, n2, media;

    printf("NOTA 1: ");
    scanf("%f", &n1);
    
    printf("NOTA 2: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    printf("\n\nO aluno tirou %.2f na primeira prova e %.2f na segunda. Sua media e %.2f.\n", n1, n2, media);
    printf("Sua situacao e: %s", (media>=7)?"APROVADO":"REPROVADO");
}