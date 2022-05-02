/*2. Fa ̧ca um programa em C que leia uma string e um caractere do usu ́ario e informe se a string de
entrada cont ́em o caracter fornecido.*/

#include <stdio.h>
#include <string.h>
int main()
{
    char car,frase[100];
    char *r;
    puts("Insira uma string");
    scanf("%s", frase);
    getchar();
    puts("Insira o caracter a ser verificado");
    scanf("%c",&car);
    r = strrchr(frase, car);
    if(r != NULL) printf("A frase %s possui o caracter %c", frase, car);
    else printf("A frase %s nao possui o caracter %c", frase, car);
    
    
return 0;
}
