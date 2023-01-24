#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese"); // não consegui fazer funcionar
    
    printf("Olá, Mundo!\nUfa! Já estou \"LIVRE\" da maldição.\nsetlocale não funciona\n");
}
