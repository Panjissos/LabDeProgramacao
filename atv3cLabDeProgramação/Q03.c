/*3. Fa ̧ca um programa em C que leia uma string do usu ́ario e informe a quantidade de caracteres da
string fornecida. N ̃ao use a fun ̧c ̃ao strlen().*/

#include <stdio.h>
#define TAM 100
int main(int argc, char const *argv[])
{
    char nome[TAM], i =0;
    puts("Insira uma string");
    scanf("%s", nome);
    getchar();
    while (1)
    {
        if (nome[i] != NULL) i++;
        else break;
    }
    printf("A string fornecida possui %d caracteres",i);
    
    return 0;
}
