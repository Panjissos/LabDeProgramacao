/*ATV17 Escrever um programa que receba um valor inteiro do usu ́ario e apresente o seu valor absoluto (m ́odulo).
N ̃ao utilize estrutura de decis ̃ao if.*/

#include <stdio.h>
#include <stdlib.h>

void valorAbsoluto(){
    int valor = 0;
    puts("Insira um valor inteiro");
    scanf("%d", &valor);
    valor >= 0 ? printf("O modulo de: %d, e: %d",valor, valor) : printf("O modulo de: %d, e: %d",valor,abs(valor));
}

int main(int argc, char const *argv[])
{
    valorAbsoluto();
    return 0;
}

