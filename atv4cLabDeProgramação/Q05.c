/*5. Escreva um programa que encontre o tamanho de uma string fornecida. Utilize ponteiros.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 255

void tamanhoString(char *);

int main(int argc, char const *argv[])
{
    char *p = NULL;

    char frase[TAM];

    puts("Insira uma frase");

    gets(frase);

    p = frase;

    tamanhoString(p);

    free(p);

    return 0;
}

void tamanhoString(char *p){
    int i = 0;
    
    while (*(p + i) != '\0') i++;

    printf("O tamanho da string eh: %d",i);
}
