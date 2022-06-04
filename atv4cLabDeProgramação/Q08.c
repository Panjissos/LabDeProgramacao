/*
8. Escreva um programa que busque um caracter fornecido em uma string utilizando ponteiros.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 100

int contaCaracter(char *, char c);

int main(int argc, char const *argv[])
{
    char *frase = NULL, string[T], c;

    puts("Insira uma string");
    gets(string);

    puts("Insira o caracter a ser verificado");
    scanf("%c", &c);

    frase = string;

    printf("O caracter %c apareceu %d vezes", c, contaCaracter(frase, c));

    return 0;
}

int contaCaracter(char *c, char car){

    int j = 0;

    for (int i = 0; i < strlen(c); i++)
    {
        j += *(c + i) == car ? 1 : 0;
    }
    
    return j;
}

