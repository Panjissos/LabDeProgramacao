/*ATV25 Escreva um programa que leia um tempo em segundos e imprima quantas horas, minutos e segundos
h ́a neste tempo.*/
#include <stdio.h>
void tempoHora(int s){
    float tm = 0, th = 0, sec = 0;
    th = (s/3600);
    tm = (s%3600)/60;
    sec = s%60;
    printf("Os segundos convertidos em horas conrrepondem a: %.02fh:%.02fm:%.02fs",th,tm,sec); 
}
int main(int argc, char const *argv[])
{
    float sec = 0;
    puts("Insira o tempo em segundos");
    scanf("%f", &sec);
    tempoHora(sec);
    return 0;
}
