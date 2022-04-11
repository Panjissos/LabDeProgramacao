/*ATV11 Elabore um programa que apresente o valor da convers ̃ao em d ́olar de um valor lido em real. O
programa deve solicitar o valor da cota ̧c ̃ao do d ́olar e tamb ́em a quantidade de reais que o usu ́ario
deseja converter.*/
#include <stdio.h>
void convertRealPdolar(){
    float valor, conversao, cotacao;
    puts("Insira o valor a ser convertido");
    scanf("%f",&valor);
    puts("Insira a cotacao do dolar");
    scanf("%f", &cotacao);
    conversao = (valor*(cotacao));
    printf("%.2f em dolar e:%.2f",valor, conversao);
}
int main(int argc, char const *argv[])
{
    convertRealPdolar();
    return 0;
}
