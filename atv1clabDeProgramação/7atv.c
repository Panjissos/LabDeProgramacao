/*ATV7
Faça um programa que leia uma quantidade de horas, minutos e segundos e imprima o total de segundos.*/
#include <stdio.h>

void converteParaSegundos(int h, int m, int s){
    int x = 0;
    x = ((h*60*60) + (m*60) + s);
    printf("A quantidades de segundos em %dh %dm %ds %d",h,m,s,x);
}

int main(int argc, char const *argv[])
{   
    int h=0,m=0,s=0;
    puts("Insira a hora");
    scanf("%d",&h);
    puts("Insira os minutos");
    scanf("%d",&m);
    puts("Insira os segundos");
    scanf("%d",&s);
    converteParaSegundos(8,47,50);
    return 0;
}
