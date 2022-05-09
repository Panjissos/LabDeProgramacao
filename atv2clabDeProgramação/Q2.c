/*Refa ̧ca o programa da Quest ̃ao 1, utilizando a estrutura de repeti ̧c ̃ao com teste no final.*/
#include <stdio.h>


int main(int argc, char const *argv[])
{
    int dia;
    
    do{
        puts("Insira um numero correspondente a um dia da semana");
        scanf("%d",&dia);
        if (dia == 1)
            puts("Primeiro dia da semana: Segunda-Feira");
        else if(dia == 2)
            puts("Primeiro dia da semana: Terca-Feira");
        else if(dia == 3)
            puts("Primeiro dia da semana: Quarta-Feira");
        else if(dia == 4)
            puts("Primeiro dia da semana: Quinta-Feira");
        else if(dia == 5)
            puts("Primeiro dia da semana: Sexta-Feira");
        else if(dia == 6)
            puts("Primeiro dia da semana: Sabado-Feira");
        else if(dia == 7)
            puts("Primeiro dia da semana: Domingo");
        else
            puts("Numerio de dia nao valido");
    }
    while (dia <8 && dia > 0);
    
    return 0;
}