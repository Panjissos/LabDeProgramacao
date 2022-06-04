#include <stdio.h>
#include <stdlib.h>
#define T 100

void concatenaString(char *, char *);

int main(int argc, char const *argv[])
{
    char frase1[T]; 
    char frase2[T];

    puts("Insira a frase 1");
    gets(frase1);
    puts("Insira a frase 2");
    gets(frase2);

    concatenaString(frase1,frase2);

    return 0;
}

void concatenaString(char *p1, char *p2){

    char *p = NULL;

    p = malloc((strlen(p1) + strlen(p2)) * sizeof(char));

    int i = 0;
    while (*(p1 + i) != '\0'){
        *(p + i) = *(p1 + i);
        i ++;
    }

    int j = 0;
    while (*(p2 + j) != '\0')
    {
        *(p + i + j) = *(p2 + j);
        j++;
    }

    for (int i = 0; i < (strlen(p1) + strlen(p2)); i++)
    {
        printf("%c",*(p + i));
    }
    

}