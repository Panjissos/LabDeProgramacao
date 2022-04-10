/*Escreva um programa que leia duas variaveis A e B e efetue a troca dos valores. O objetivo e que a
variavel A passe a conter o valor de B e a variavel B passe a possuir o valor de A. Apresente os valores
apos a efetivacao do processamento da troca.*/
#include <stdio.h>

void trocaValores(){

    int A, B, aux;

    puts("Insira o valor de A");
    scanf("%d", &A);
    puts("Insira o valor de B");
    scanf("%d", &B);

    aux = B;
    B = A;
    A = aux;

    printf("A:%d B:%d", A, B);

}

int main(int argc, char const *argv[])
{
    trocaValores();
    return 0;
}
