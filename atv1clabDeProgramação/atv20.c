/*Escreva um programa que receba um n ́umero inteiro e ent ̃ao determine e imprima se ele  ́e par ou  ́ımpar.
Obs.: N ̃ao utilizar estrutura de decis ̃ao if.*/
#include <stdio.h>

void verParOuImpar(int var){
    printf("%d e:",var);
    switch (var%2)
    {
    case 0:
        puts("par");
        break;
    default:
        puts("impar");
        break;
    }
}
int main(int argc, char const *argv[])
{   
    int num = 0;
    puts("Insira o valor a ser verificado");
    scanf("%d", &num);
    verParOuImpar(num);
    return 0;
}
