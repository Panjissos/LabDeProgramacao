/*ATV6 Fazer um programa para ler a altura (em metros) e o sexo de uma pessoa e calcular o seu peso ideal
atrav ́es da seguinte f ́ormula:
para homens: 72.7 * altura - 58
para mulheres: 62.1 * altura - 44.7*/
#include <stdio.h>
void calculaPEsoIdeal(){
    float peso, altura, pesoIdeal;
    char c;
    puts("Insira o sexo, m, para masculino\nf, para feminino");
    scanf("%c",&c);
    printf("Insira o peso\n");
    scanf("%f", &peso);
    puts("Insira sua altura\n");
    scanf("%f",&altura);
    
    if(c == 'm'){
        pesoIdeal = ((72.7*altura) - 58);
    }else{
        pesoIdeal = ((62.1*altura) - 44.7);
    }
    printf("%2.f",pesoIdeal);
}
int main(int argc, char const *argv[])
{
    calculaPEsoIdeal();
    return 0;
}
