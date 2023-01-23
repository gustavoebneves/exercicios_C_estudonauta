#include <stdio.h>
#include <stdlib.h>
void main()
{
    // LENDO NÚMEROS INTEIROS E REAIS
    
    printf("-----------------------------------------\n\nLENDO NUMEROS INTEIROS E REAIS\n\n");
    float media, n2; int n1;

    printf("Insira as duas notas do aluno: ");
    scanf("%i%f", &n1, &n2); // apertar espaço na hora de digitar a outra variável, enter somente depois de digitar as duas
    // & -> o que o scanf fizer vai ser guardado no endereço de n1, por exemplo

    media = (n1+n2)/2;
    printf("As notas do aluno X sao:\nN1: %i\nN2: %.1f\nA media do aluno X e: %.1f\n\n", n1, n2, media);

    // LENDO CARACTERES

    printf("-----------------------------------------\n\nLENDO CARACTERES\n\n");
    char r, r2;

    printf("Insira uma letra: ");
    fflush(stdin); // apaga alguma coisa que sobra da memória volátil do scanf anterior
    // aconcelhável utilizar antes de ler qualquer char
    // ^^^ IMPORTANTÍSSIMO ^^^
    scanf("%c", &r);

    printf("\nVoce digitou a letra %c.\n\n", r);

    // outra forma de ler um char (ainda tem que dar fflush(stdin);)
    printf("Insira outra letra: ");
    fflush(stdin);
    r2 = getchar(); // funciona somente para um char
    
    printf("\nVoce digitou a letra %c\n\n", r2);

    // se digitar "oi" ele só vai ler o "o"
    // pode digitar números, mas eles vão ser tratados como letras


    // LENDO STRINGS

    printf("-----------------------------------------\n\nLENDO STRINGS\n\n");

    char nome[40], nome_completo[40]; // vai aceitar um nome de no MÁXIMO 40 caracteres
    printf("Insira seu nome completo: ");
    fflush(stdin);
    scanf("%s", nome); // scanf só lê antes do primeiro espaço, o resto é ignorado

    printf("\nOla, %s. E bom te conhecer!\n\n", nome);

    // corrigindo o problema...
    printf("Agora sim voce pode inserir seu nome completo: ");
    fflush(stdin); // com gets() não precisa de fflush(stdin), mas é bom usar pra acostumar sempre que for ler strings
    gets(nome_completo);

    printf("\nAgora sim e bom te conhecer %s.\n\n", nome_completo);

    system("pause");
}
// stdin -> standard input
