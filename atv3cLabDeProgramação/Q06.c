/*6. Fa ̧ca um programa em C que leia uma string do usu ́ario e a apresente na forma inversa.*/

#include <stdio.h>
#include <string.h>
#define TAM 100

char inverteString(char *s);

int main(int argc, char const *argv[])
{
    char s[TAM];
    gets(s);
    inverteString(s);
    return 0;
}

char inverteString(char *s){
    int tamS =  strlen(s);
    char aux[strlen(s)];
    for (int j =0, i = tamS -1 ; i>=0; i--, ++j)
    {
        aux[j] = s[i];
    }
    aux[tamS] = '\0';
    printf("\n%s",aux);
}
