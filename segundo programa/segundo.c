#include<stdio.h>

void main()
{
    char nome[10];
    printf("Qual e o seu nome? ");  // acento buga no terminal 
    scanf("%s", &nome);
    printf("Muito prazer em te conhecer %s", nome);
}
// se for um input, pode colocar acento