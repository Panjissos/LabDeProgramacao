/*Fa ̧ca um programa em C que concatene duas strings recebidas pelo usu ́ario. Construa uma vers ̃ao
com uso da fun ̧c ̃ao strcat() e outra sem.*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define TAM 100

void strcatNaMao(char *s1, char *s2);

int main(int argc, char const *argv[])
{
    char s1[TAM], s2[TAM], i = 0;
    puts("Insira a string 1");
    gets(s1);
    puts("Insira a string 2");
    printf("\n");
    gets(s2);
    strcatNaMao(s1,s2);
    printf("\n");
    
    return 0;
}
void strcatNaMao(char *s1, char *s2){

    int i = strlen(s1); 

    for (int j = 0; s2[j] != '\0'; j++, i++) {
        s1[i] = s2[j];
    }

    s1[i] = '\0';
    
    printf("String concatenada: %s",s1);
}