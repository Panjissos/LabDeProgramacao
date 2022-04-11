/*ATV26 Fazer um programa para ler as coordenadas x e y de dois pontos e calcular a distˆancia entre os dois
pontos no plano. (Utilize a fun ̧c ̃ao sqrt (numero), biblioteca math.h).*/
#include <stdio.h>
#include <math.h>

void calculaDistanciaEntrePontos(float x1,float x2, float y1, float y2){
    float res=0;
    printf("%.02f", sqrt(((pow(x2 - x1,2)) + (pow(y2 - y1,2))))); 
}
int main(int argc, char const *argv[])
{
    float x1,x2,y1,y2;
    puts("Insira os valores de x1 de x2");
    scanf("%f %f", &x1, &x2);
    puts("Insira os valores de y1 de y2");
    scanf("%f %f", &y1, &y2);
    calculaDistanciaEntrePontos(x1,x2,y1,y2);
    return 0;
}
