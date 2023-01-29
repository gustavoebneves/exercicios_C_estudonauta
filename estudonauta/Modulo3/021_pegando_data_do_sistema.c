#include <stdio.h>
#include <time.h>

void main()
{
    time_t t;
// alguma coisa de POO

    time(&t);
    
    struct tm *data;
// lê-se: a estrutura vai se chamar tm e a variável data vai servir de ponteiro para tm
// têm vários TMs dentro da biblioteca time.h, a variável data ta servindo pra dizer qual tu vai usar. Ex. abaixo
    
    data = localtime(&t);

    int dia = data -> tm_mday; // Ex
    int mes = data -> tm_mon + 1; // janeiro = 0. fazer + 1 para corrigir
    int ano = data -> tm_year + 1900; // 1900 = ano 0. fazer + 1900 para cprrigir
 
    printf("Estamos no dia %i do mes %i do ano %i", dia, mes, ano);
}

/*
TMs

tm_mday -> dia do mes (1, 31)

tm_mon -> mes em numero (somar 1)

tm_year -> ano (somar 1900)

tm_wday -> dia da semana (0, 6)

tm_yday -> dia do ano (0, 365)

tm_hour -> hora atual (0, 23)

tm_min -> minuto atual (0, 59)

tm_sec -> segundo atual (0, 59)

*/