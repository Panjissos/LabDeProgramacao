/*Escreva um programa que calcule o produto entre um valor dado x por 2 elevado a um valor dado n.
Obs.: Utilize operadores bin ́arios.*/

#include <stdio.h>
#include <math.h>
int binario(int x){
  return (x == 0) ? 0: (binario(x/2)*10) | (x%2);
}
void produtoBin(){
    int x, n, b;
    puts("Insira um valor para x");
    scanf("%d",&x);
    puts("Insira um valor para n");
    scanf("%d",&n);
    b = binario(x*pow(2,n));
    printf("O produto entre %d e %d\nEm binario:%d\nEm decimal:%d", x,(int)(pow(2,n)),binario(binario(x) & binario(pow(2,n))), (binario(x) & (int)(binario(pow(2,n)))));
}
int main(int argc, char const *argv[])
{
    produtoBin();
    return 0;
}
