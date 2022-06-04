/*
1. Escreva um programa que adicione dois n ́umeros usando ponteiros. Al ́em do valor da soma, imprima
tamb ́em o endere ̧co de mem ́oria onde o valor resultante dessa soma est ́a armazenado.
*/

#include <stdio.h>
#include <stdlib.h>
#define T 3

int main(int argc, char const *argv[])
{
    
    int n1, n2, soma;
	int *a = NULL, *b  = NULL, *resS = NULL;

	a = &n1;
	b = &n2;
	resS = &soma;

    printf("Enderecos de N1: (%p), N2: (%p) Soma: (%p)\n", a, b, resS);
	
	scanf("%d", a);
	scanf("%d", b);

	*resS = *a + *b;

    printf("Resultados de N1: (%d), N2: (%d) Soma: (%d)", n1, n2, soma);

	return 0;
}
