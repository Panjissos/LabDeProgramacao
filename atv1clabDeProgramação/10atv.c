/*Escreva um programa que calcule e apresente o valor do volume de um caixa retangular utilizando a
f ́ormula VOLUME = COMPRIMENTO * LARGURA * ALTURA.*/
#include <stdio.h>

void calcVol(int c, int l, int a){
    printf("%d", c*l*a);
}

int main(int argc, char const *argv[])
{
    calcVol(10,6,8);
    return 0;
}
