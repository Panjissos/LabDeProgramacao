/*Escreva um programa que receba a entrada de um n ́umero de trˆes d ́ıgitos, separe o n ́umero em seus
d ́ıgitos componentes e reconstrua um n ́umero com os componentes na ordem inversa. Exemplo: para
entrada de 123, a resposta do programa seria 321.*/
#include <stdio.h>

void ordenaNum(){
    int v[3], num;
    puts("insira um numero");
    scanf("%d", &num);

    v[0] = num/100;
    v[1] = (num-100)/10;
    v[2] = (num%10)/1;
    
    printf("O numero invertido e:%d%d%d",v[2],v[1],v[0]);
}

int main(int argc, char const *argv[])
{
    ordenaNum();
    return 0;
}
