/*ATV 4Sabendo que os argumentos da fun ̧c ̃ao ”printf”podem ser express ̃oes (a+b, a/b, a*b...), e n ̃ao somente
argumentos, fa ̧ca um programa capaz de ler um valor inteiro X e escrever seu triplo, seu quadrado, e
seu meio.*/
#include <stdio.h>
#include <math.h>

void exibePot(){
    float v;
    puts("Insira um valor");
    scanf("%f",&v);
    printf("%2.f %2.f %2.f ", pow(v,3), pow(v,2), v*0.5);
}

int main(int argc, char const *argv[])
{
    exibePot();
    return 0;
}

