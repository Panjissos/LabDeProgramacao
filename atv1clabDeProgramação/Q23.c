/*ATV23 Escreva um programa que receba a entrada de um n ́umero de trˆes d ́ıgitos, separe o n ́umero em seus
d ́ıgitos componentes e reconstrua um n ́umero com os componentes na ordem inversa. Exemplo: para
entrada de 123, a resposta do programa seria 321.*/
#include <stdio.h>

void ordenaNum(){
    int c,d,u, num;
    puts("insira um numero");
    scanf("%d", &num);

    c = num/100;
    d = (num-100)/100;
    u = (num%10)/1;
    
    printf("O numero invertido e:%d %d %d",u,d,c);
}

int main(int argc, char const *argv[])
{
    ordenaNum();
    return 0;
}
