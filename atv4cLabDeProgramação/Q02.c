/*
Escreva um programa que troque o valor de dois n ́umeros utilizando ponteiros.
*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 2

void modificaValor(int *);

int main(int argc, char const *argv[])
{
    int *p = NULL;

    p = malloc(TAM * sizeof(int));

    puts("Insira dois valores");
    scanf("%d%d",(p + 0), (p + 1));

    for (int i = 0; i < TAM; i++)
    {
        printf("ponteiro antes da troca %d: %d\n",i,*(p + i));
    }

    modificaValor(p);

    return 0;
}

void modificaValor(int *p){
    int aux = 0;
    aux = *(p + 0);
    *(p + 0) = *(p + 1);
    *(p + 1) =  aux;

    for (int i = 0; i < TAM; i++)
    {
        printf("ponteiro de %d: %d\n",i,*(p + i));
    }
}
