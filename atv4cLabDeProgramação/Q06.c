/*
6. Escreva um programa que copie uma string para outra usando ponteiros.
*/
#include <stdio.h>
#include <stdlib.h>
#define T 100

void copiaString(char *,int , char *);

int main(int argc, char const *argv[])
{

    char *c = NULL, frase[T], *aux = NULL;

    aux = frase;

    puts("Insira a frase");
    gets(frase);

    c = frase;

    printf("String %s dentro do ponteiro c \n", c);

    copiaString(c,2, aux);

    printf("String %s dentro do ponteiro aux \n", aux);

    return 0;
}

void copiaString(char *s, int t, char *aux){
    aux = s;

}