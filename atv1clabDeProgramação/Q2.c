#include <stdio.h>
/*ATV2 Faça um programa que leia um valor inteiro decimal X e escreva, na tela, este mesmo valor nas bases
hexadecimal e octal.
Ex.: Entre com o valor: 10
Hexadecimal: A
Octal: 12*/
void exibeValorBase(){
    int x;
    puts("Insira um valor");
    scanf("%d",&x);
    printf("Em hexadecimal: %x\nEm octal: %o", x, x);
}
int main()
{   
    exibeValorBase();
    return 0;
}

