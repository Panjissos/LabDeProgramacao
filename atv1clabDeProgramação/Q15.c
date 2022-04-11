/*ATV15 Uma empresa contrata um vendedor a R$ 50,25 por dia. Crie um programa que solicite o n ́umero de
dias trabalhados pelo vendedor e imprima o valor l ́ıquido a ser pago ao mesmo, sabendo que se ele
trabalhou at ́e 10 dias n ̃ao tem direito `a gratifica ̧c ̃ao, se ele trabalhou acima de 10 dias e at ́e 20 dias
tem direito `a gratifica ̧c ̃ao de 20%, se ele trabalhou acima de 20 dias tem direito `a gratifica ̧c ̃ao de 30%.
Sempre s ̃ao descontados 10% de imposto de renda em cima do valor bruto.*/
#include <stdio.h>
#define PD 50.25

void salarioValor(){
    float dias = 0, salario = 0;
    puts("Insira a quantidade de dias trabalhados");
    scanf("%f", &dias);
    if(dias >= 10 && dias <10)
    {
        salario = ((PD*dias)*1.2) - (((PD*dias)*1.2)*0.1);
    }else if(dias >= 20){
        salario = ((PD*dias)*1.3) - (((PD*dias)*1.3)*0.1);
    }else{
        puts("Erro");
    }
    printf("O salario e: %.2f",salario);
}
int main(int argc, char const *argv[])
{
    salarioValor();
    return 0;
}
