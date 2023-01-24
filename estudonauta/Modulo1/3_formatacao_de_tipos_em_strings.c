#include <stdio.h>
#include <locale.h>

void main()
{         
    setlocale(LC_ALL, "Portuguese");
                                         // dados SEMPRE em ordem
    printf("O %s tem %i anos de idade.\n", "Gustavo", 21);
        // ^^   string de formatação   ^^ 

    printf("Seu peso atual é de %fKg.\n", 90.5); // mostra com várias casas decimais por padrão
    printf("Seu peso atual é de %6.2fKg.\n", 90.5);
                             // ^ 6 casas ao todo com duas delas sendo decimais

    printf("O seu sexo é %c.\n", 'M'); // só funciona com aspas simples
    printf("O seu sexo é %s.\n", "masculino");
    
}

/*
!! Servem pra saídas e entradas !!

%i ou %d -> mostra números inteiros

%f -> mostra números reais

%c -> mostra só uma letra

%s -> mostra uma string

%e -> notação exponencial

%hd -> short decimal (short int)

%ld -> long decimal (long int)

%hu -> unsigned short 

%u -> unsigned

%lu -> unsigned long
*/