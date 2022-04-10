/*Escreva um programa que peca ao usu ́ario para digitar dois numeros, obtenha-os do usu ́ario e imprima
a soma, o produto, a diferenca, o quociente e o resto da divis ̃ao dos dois n ́umeros.*/
#include <stdio.h>

void operacoesNumericas(){
    int n1, n2;
    puts("Insira o valor de n1 \n");
    scanf("%d", &n1);
    puts("Insira o valor de n2 \n");
    scanf("%d", &n2);
    printf("A soma entre n1 e n2 e:%d\nO produto entre n1 e n2 e:%d\nA diferenca entre n1 e n2:%d\nO quociente entre n1/n2 e:%d\nO quociente entre n2/n1 e:%d\nO mod entre n1%%n2:%d\nO mod entre n2%%n1:%d\n",(n1+n2), (n1*n2),(n1-n2),(n1/n2),(n2/n1),(n1%n2),(n2%n2));
}

int main(int argc, char const *argv[])
{
    operacoesNumericas();
    return 0;
}
