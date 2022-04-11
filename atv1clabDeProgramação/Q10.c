/*ATV10 Escreva um programa que calcule e apresente o valor do volume de um caixa retangular utilizando a
f ́ormula VOLUME = COMPRIMENTO * LARGURA * ALTURA.*/
#include <stdio.h>

void calcVol(float c, float l, float a){
    printf("O volume e:%.2f", c*l*a);
}

int main(int argc, char const *argv[])
{   
    float c,l,a;
    puts("Insira as medidas do comprimento, largura e altura do objeto");
    scanf("%f",&c);
    scanf("%f",&l);
    scanf("%f",&a);
    calcVol(c,l,a);
    return 0;
}
