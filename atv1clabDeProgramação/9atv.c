/*Escreva um programa que leia um valor numerico inteiro e apresente como resultado os seus valores
sucessor e antecessor.*/
#include <stdio.h>
void sucessorEantecessor(int num){
    printf("O sucessor de %d e: %d e o antecessor de %d e: %d",num ,num+1,num , num-1);
}

int main(int argc, char const *argv[])
{
    sucessorEantecessor(2);
    return 0;
}
