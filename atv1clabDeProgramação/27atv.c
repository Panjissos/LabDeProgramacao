/*Escreva um programa que solicite 3 n ́umeros em ponto flutuante e imprima a m ́edia aritm ́etica e
geom ́etrica. (Utilize a fun ̧c ̃ao pow(base, expoente) da biblioteca math.h).*/
#include <stdio.h>
#include <math.h>

void mediaGeometrica(int n){
    float soma = 1,v[n];
    for (int i = 0; i < n; i++)
    {
        printf("Insira o %d valor\n", i+1);
        scanf("%f", &v[i]);        
        soma*= v[i];
    }
    printf("O resultado da media geometrica e:%.02f\n",pow(soma,(1.0/n)));
}
void mediaAritmetica(int n){
    float soma = 0, v[n];
    for (int i = 0; i < n; i++)
    {
        printf("Insira o %d valor\n", i+1);
        scanf("%f", &v[i]);        
        soma+= v[i];
    }
    printf("O resultado da media aritimetica e:%.02f", (float)(soma/n));
}
int main(int argc, char const *argv[])
{   
    int n = 0, n1 = 0;
    puts("Insira os valores de n(para media geometrica) e n1(para media aritmetica)");
    scanf("%d %d",&n,&n1);
    mediaGeometrica(n);
    mediaAritmetica(n1);
    return 0;
}
