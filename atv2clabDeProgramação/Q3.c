/*Escreva um programa que leia um n ́umero inteiro e positivo F e calcule o fatorial deste n ́umero.*/

#include <stdio.h>

int fatorial(int n){
    if(n == 0)
        return 0;
    else if(n ==1)
        return 1;
    else
        return n*fatorial(n -1);  
}

int main(int argc, char const *argv[])
{   
    int n;
    puts("Insira um valor para se verificar o fatorial");
    scanf("%d",&n);
    printf("O fatorial de:%d e:%d",n,fatorial(n));
    return 0;
}
