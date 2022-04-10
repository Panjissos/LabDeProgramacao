#include <stdio.h>
//Faça um programa capaz de ler um valor real e escrevˆe-lo com apenas uma casa decimal.

void lerLimitandoCasaDec(){
    float numero;
    puts("Insira um valor real");
    scanf("%f", &numero);
    printf("numero: %.1f",numero);
}

int main(int argc, char const *argv[])
{   
    lerLimitandoCasaDec();
    return 0;
}
