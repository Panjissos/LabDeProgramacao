/*ATV9 Escreva um programa que leia um valor numerico inteiro e apresente como resultado os seus valores
sucessor e antecessor.*/
#include <stdio.h>
void sucessorEantecessor(int num){
    printf("O sucessor de %d e: %d e o antecessor de %d e: %d",num ,num+1,num , num-1);
}

int main(int argc, char const *argv[])
{   
    int n;
    puts("Insira o numero a se verificar seu sucessor e antecessor");
    scanf("%d", &n);
    sucessorEantecessor(n);
    return 0;
}
