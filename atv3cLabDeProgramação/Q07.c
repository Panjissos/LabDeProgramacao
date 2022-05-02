/*7. Fa ̧ca um programa em C que gere um vetor com 3 n ́umeros inteiros pseudoaleat ́orios no intervalo
[0, 19] e apresente a sua m ́edia aritm ́etica e geom ́etrica.*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 20
#include <math.h>

void vetorAleatorio();

int main(int argc, char const *argv[])
{
    vetoAleatorio();
    return 0;
}

void vetoAleatorio(){
    int v[TAM], soma = 0;
    float prod= 1, mediaA = 0, mediaG = 0;
    for (int i = 0, j = prod; i < TAM; i++, j++) 
    {
        v[i] = rand() % 3;
        printf("%d\n",v[i]);
        soma += v[i];
        prod *= v[i];
    }
    mediaA = (float) soma/TAM;
    mediaG = pow(prod,(1.0/TAM));
    printf("Media Aritmetica%.2f\nMedia Geometrica:%.2f\n",mediaA,mediaG);
}
