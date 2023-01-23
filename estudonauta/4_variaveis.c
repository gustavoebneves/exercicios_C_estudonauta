#include <stdio.h>

void main()
{
    unsigned int idade = 19;
    char nome[] = "Gustavo"; // CADEIA DE CARACTERES SÃO ASPAS DUPLAS
          // CASO FOR UMA CADEIA, NÃO ESQUECER DOS COLCHETES NA DECLARAÇÃO
          // OU...
    char *sobrenome = "Neves";
    char primeira_letra = 'G'; // UM ÚNICO CARACTERE SÃO ASPAS SIMPLES
    float media = 9.5, peso = 90.5;
              // não esquecer da vírgula ao declarar duas variáveis de mesmo tipo na mesma linha
              // igual ao portugol studio

    printf("Nome: %s\nSobrenome: %s\nIdade: %u\nPrimeira letra do nome: %c\nMedia: %3.2f\nPeso: %.2f", nome, sobrenome, idade, primeira_letra, media, peso);

    // também é possível declarar variáveis de tipos diferentes na mesma linha
    int distancia_sat = 384400; char nome_sat[] = "Lua"; char prim_sat = 'L';
                             // não esquecer do ; entre os tipos diferentes e no final da linha
    
    // e também é possível declarar variáveis de mesmo tipo na mesma linha
    float diametro_sat = 3474.8, densidade_sat = 3.34;
                           // não esquecer da , entre elas e o ; no final
    
    printf("\n\nO nome do nosso satelite natural e %s. \nA sua primeira letra e %c. \nA distancia da Terra ate la e de %iKm. \nO diametro do nosso satelite e de %.2fKm. \nA densidade e de %.2fg/cm3\n", nome_sat, prim_sat, distancia_sat, diametro_sat, densidade_sat);
}