/*Escreva um programa que receba um valor inteiro e apresente o resultado do valor lido elevado ao
quadrado.*/
#include <stdio.h>
#include <math.h>

void verificaMaior(int valor){
    printf("Valor inserido foi: %d, ele elevado ao quadrado e: %.2f",valor, pow(2,valor));
}

int main(int argc, char const *argv[])
{
    verificaMaior(2);
    return 0;
}
