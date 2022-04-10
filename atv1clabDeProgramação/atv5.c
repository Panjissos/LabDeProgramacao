/*Escreva um programa que pegue o valor de uma conta de restaurante e imprima o valor total a ser
pago, considerando que o restaurante cobra 10% de taxa para o gar ̧com.*/
#include <stdio.h>

void conta(){
    float conta, taxa ;
    puts("Insira o valor da conta");
    scanf("%f",&conta);
    taxa = (conta*10)/100;
    printf("O valor total a ser pago sera:%.2f, \nTaxa de servico: %.2f",conta ,taxa);
}

int main(int argc, char const *argv[])
{
    conta();
    return 0;
}
