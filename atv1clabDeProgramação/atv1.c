/*
ATV1
Diga a ordem de c ́alculo dos operadores em cada uma das instru ̧c ̃oes em C a seguir e mostre o valor
de x depois que cada instru ̧c ̃ao for executada.
• x = 7 + 3*6/2-l;
• x = 2%2 + 2*2-2/2;
• x = (3 * 9 * (3 + (9*3/ (3) ) ) );*/
#include <stdio.h>

void ordenCalc(){
    float x;
    x = 7 + 3*6/2-1;
    printf("Resultado=%f\nA ordem das operacoes executadas da expressao: x = 7 + 3*6/2-1 foram multiplicacao, divisao, \nsubtraçao e soma\n ",x);
    x = 2%2 + 2*2-2/2;
    printf("Resultado=%f\nA ordem das operacoes executadas da expressao: 2%%2 + 2*2-2/2 foram mod, multiplicacao, divisao, \nsubtraçao e soma\n",x);
    x = (3 * 9 * (3 + (9*3/ (3) ) ) );
    printf("Resultado=%f\nA ordem das operacoes executadas da expressao: (3 * 9 * (3 + (9*3/ (3) ) ) ) foram multiplicacao, \ndivisao, soma, multiplicacao e multiplicacao\n",x);
}

int main(int argc, char const *argv[])
{   
    ordenCalc();
    
    return 0;
}