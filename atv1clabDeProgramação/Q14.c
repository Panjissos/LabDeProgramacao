/*ATV14 Escreva um programa que leia uma temperatura em graus Celsius e apresente convertida em graus
Fahrenheit. A formula de versao  ́e F = (9 * C + 160) / 5, sendo F a temperatura Fahrenheit e C a
temperatura em Celsius.*/
#include <stdio.h>

void conversaoDeTemp(float C){

    float F;

    F = ((9*C) + 160)/5;

    printf("A temperatura:%.2f em Fahrenheit e:%2.f",C, F);

}

int main(int argc, char const *argv[])
{   
    float temp;
    puts("Insira a temperatura em Celsius para ser convertida em Fahrenheit");
    scanf("%f",&temp);
    conversaoDeTemp(temp);
    return 0;
}
