/*Implementar um programa para resolver o seguinte problema: Jos ́e tem 150 cent ́ımetros e cresce 2
cent ́ımetros por ano. O Pedro tem 110 cent ́ımetros e cresce 3 cent ́ımetros por ano. Em quantos anos
Pedro ser ́a maior que Jos ́e?*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int tamanhoP = 110, tamanhoJ = 150, anos=0;

    while (tamanhoP < tamanhoJ)
    {
        tamanhoJ+=2;
        tamanhoP+=3;
        anos++;
    }
    printf("Em %d anos Pedro sera maior que Jose\nPedro tera %d cm de altura\nJose tera %d cm de altura",anos,tamanhoP,tamanhoJ);
    
    return 0;
}
