/*Escreva um programa que leia o raio de um c ́ırculo e imprima seu diˆametro, o valor de sua circunferˆencia
e sua  ́area. Use o valor de 3,14159 para ”pi”. Fa ̧ca cada um destes c ́alculos dentro da instru ̧c ̃oes (ou
instru ̧c ̃oes) printf e use o especificador de convers ̃ao %f.*/
#include <stdio.h>
#define PI 3.14159

void areaCirc(int r){
    printf("A area do circulo e: %0.2f\n", PI*(r*r));
}
void diametro(int r){
    printf("O diametro e: %d\n", r+r);
}
void circunferencia(int r){
    printf("A circunferencia do circulo e: %0.2f\n", (2*PI*r));
}
int main(int argc, char const *argv[])
{   
    int r = 0;
    puts("Insira o valor do raio ");
    scanf("%d", &r);
    areaCirc(r);
    diametro(r);
    circunferencia(r);
    return 0;
}
