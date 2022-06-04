/*
4. Escreva um programa que leia um vetor do usu ́ario e imprima seus valores e seus endere ̧cos. Teste
o vetor com tipos de dados diferentes, analise os endere ̧cos. O que vocˆe observou?
*/
// Professor, notei que todas as posições de memória do ponteiro continuam as mesmas.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define V 10
#define T 3

void imprimirVetor(int *, int);
void imprimirCvetor(char *, int);
void imprimirFvetor(float *, int);
void gerarVetor(int *, int);
void gerarFvetor(float *, int);
void gerarCvetor(char *, int);

int main(int argc, char const *argv[])
{

    int *p = NULL, v[T];
    char *c = NULL, vc[T];
    float *f = NULL, vf[T];

    c = vc;
    p = v;
    f = vf;

    srand(time(NULL));

    gerarVetor(p, T);

    imprimirVetor(p, T);

    printf("\n");

    gerarCvetor(c, T);

    imprimirCvetor(c, T);

    printf("\n");

    gerarFvetor(f, T);

    imprimirFvetor(f, T);

    return 0;
}

void imprimirVetor(int *p, int t)
{

    for (int i = 0; i < t; i++)
    {
        printf("Valor(%d), Endereco:(%p) ", *(p + i));
    }
}

void imprimirCvetor(char *p, int t)
{

    for (int i = 0; i < t; i++)
    {
        printf("Valor(%c), Endereco:(%p) ", *(p + i));
    }
}

void imprimirFvetor(float *p, int t)
{

    for (int i = 0; i < t; i++)
    {
        printf("Valor(%.0f), Endereco:(%p) ", *(p + i));
    }
}

void gerarVetor(int *p, int t)
{

    for (int i = 0; i < t; i++)
    {
        *(p + i) = rand() % V;
    }
    printf("\n");
}

void gerarCvetor(char *p, int t)
{

    for (int i = 0; i < t; i++)
    {
        *(p + i) = '!' + rand() % 128 - 26;
    }
    printf("\n");
}

void gerarFvetor(float *p, int t)
{

    for (int i = 0; i < t; i++)
    {
        *(p + i) = rand() % V;
    }
    printf("\n");
}
