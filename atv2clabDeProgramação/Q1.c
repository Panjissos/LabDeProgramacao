/*Implemente um programa que tenha como entrada um n ́umero (1-7) que corresponde a um dos dias
da semana e imprima na tela o nome do dia correspondente (domingo, segunda, ter ̧ca, quarta, quinta,
sexta, s ́abado). Se o n ́umero lido n ̃ao estiver no intervalo 1-7, imprima: “N ́umero de dia n ̃ao v ́alido”. O
programa deve permanecer executando at ́e que o usu ́ario tecle o numero 0. (Utilize obrigatoriamente
teste no in ́ıcio).*/

#include<stdio.h>

diasDaSemana(int dia){
    switch (dia)
    {
    case 1:
        puts("Primeiro dia da semana: Segunda-Feira");
        break;
    case 2:
        puts("Primeiro dia da semana: Terca-Feira");
        break;
    case 3:
        puts("Primeiro dia da semana: Quarta-Feira");
        break;
    case 4:
        puts("Primeiro dia da semana: Quinta-Feira");
        break;
    case 5:
        puts("Primeiro dia da semana: Sexta-Feira");
        break;
    case 6:
        puts("Primeiro dia da semana: Sabado-Feira");
        break;
    case 7:
        puts("Primeiro dia da semana: Domingo");
        break;
    
    default:
        puts("Numerio de dia nao valido");
        break;
    }
}

int main(int argc, char const *argv[])
{
    int dia;
    puts("Insira um numero correspondente a um dia da semana");
    scanf("%d",&dia);
    diasDaSemana(dia);
    return 0;
}
