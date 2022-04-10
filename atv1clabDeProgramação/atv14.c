/*Escreva um programa que leia uma temperatura em graus Celsius e apresente convertida em graus
Fahrenheit. A formula de versao  ́e F = (9 * C + 160) / 5, sendo F a temperatura Fahrenheit e C a
temperatura em Celsius.*/
#include <stdio.h>

void conversaoDeTemp(int C){

    float temp=0, F, K;

    F = (9*C + 160)/5;

    printf("%2.f", F);

}

int main(int argc, char const *argv[])
{
    conversaoDeTemp(10);
    return 0;
}
