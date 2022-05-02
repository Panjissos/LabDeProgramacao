/*1. Fa ̧ca um programa em C que leia um vetor do tipo float com 15 elementos e apresente a soma do
menor e maior elemento do vetor fornecido.*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 15

int main(int argc, char const *argv[])
{
    int v[TAM][TAM], maior = 0, menor = 0;
    
    for(int i =0 ; i < TAM; i++){
        for (int k = 0; k < TAM; k++)
        {
            v[i][k] = rand() % 15;
            menor = (v[i][k] < menor) ? v[i][k] : menor;
            maior = (v[i][k] > maior) ? v[i][k] : maior;  
        }
    }

    for (int j = 0; j < TAM; j++)
    {
        printf("v[%d]=[%d]\n",j,v[j][j]);
    }
    
    printf("Maior %d\nMenor %d",maior,menor);

    return 0;
}
