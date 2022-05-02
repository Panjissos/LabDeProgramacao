/*4. Fa ̧ca um programa em C que leia duas strings do usu ́ario e informe se elas s ̃ao iguais. Fa ̧ca uma
vers ̃ao com o uso da fun ̧c ̃ao strcmp() e outra sem.*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define TAM 100

void strcmpNaMao(char *s1, char *s2);

int main(int argc, char const *argv[])
{
    char s1[TAM], s2[TAM], i = 0;
    puts("Insira a string 1");
    gets(s1);
    puts("Insira a string 2");
    printf("\n");
    gets(s2);
    strcmpNaMao(s1,s2);
    printf("\n");
    (strcmp(s1,s2) == 0)  ? puts("String 1 e igual a String 2") : puts("String 1 e diferente da String 2");

    return 0;
}
void strcmpNaMao(char *s1, char *s2){
    
    int i = 0;
    bool verificador = false;
    while (1)
    {
        if (s1[i] == s2[i] && strlen(s1) == strlen(s2)) verificador = true;
        else break;    
        i++;
    }
    (verificador) ? puts("String 1 e igual a String 2") : puts("String 1 e diferente da String 2");
}
