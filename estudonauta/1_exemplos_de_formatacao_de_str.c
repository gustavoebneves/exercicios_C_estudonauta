#include <stdio.h>
#include <locale.h>
void main()
{   
    setlocale(LC_ALL, "Portuguese"); // não funfou
    printf("Ola,\n mundo!\n");
    printf("Ola,\t mundo!\n");
    printf("Ola,\b mundo!\n");
    printf("Ola, \rmundo!\n");
    printf("Ola,\\ mundo ou \"!\n"); // a aspas em rosa vai aparecer
    printf("Ola, \?mundo!\n");
    printf("Ola, \7\amundo!\n");
    printf("Ola, mundo!\n");
    printf("Ola, %%mundo!\n\n");
    printf("C é \n\"SUPER\" \nFácil!");

}

/*
Anotações:

printf("Oi"); não esquecer ';'. só funciona com aspas duplas
printf - print formatado.

# -> diretiva de pré processamento (sem ;)

\n -> quebra a linha
\t -> tabulação (da um tab na string)
\b -> backspace (apaga a última coisa antes)
\r -> retorno (volta pro início da linha tudo que for após ele)
\\ -> escreve uma contrabarra (serve pra qualquer caractere especial)
\? -> interrogação (não entendi)
\a (ou 7) -> emite um beep/som de aviso do windows
%% -> escreve uma % 


*/
