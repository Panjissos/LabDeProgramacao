/*Escreva um programa que leia dois inteiros e ent ̃ao determine e imprima se o primeiro  ́e m ́ultiplo do
segundo. Obs.: N ̃ao utilizar estrutura de decis ̃ao if.*/

#include <stdio.h>

void verficaMultiplo(int n1, int n2){
    switch (n1%n2)
    {
    case 0:
        puts("E multiplo");
        break;
    default:
        puts("Nao e multiplo");
        break;
    }
}
int main(int argc, char const *argv[])
{   
    int n1, n2;
    puts("Insira o valor de n1");
    scanf("%d",&n1);
    puts("Insira o valor de n2");
    scanf("%d",&n2);
    verficaMultiplo(n1,n2);
    return 0;
}
