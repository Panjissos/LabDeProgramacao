/*ATV16 Desenvolva um programa que calcule o salario liquido de um professor. Para elaborar o programa, e
necessario possuir alguns dados, tais como o valor da hora aula, numero de horas trabalhadas no mes e
percentual de desconto do INSS. Em primeiro lugar, deve-se estabelecer o seu sal ́ario bruto para fazer
o desconto e ter o valor do salario liquido. Obs.: o programa deve informar o salario bruto e salario
liquido do professor.*/
#include <stdio.h>

void salLiquiProf(){
    float horaAula = 0, hTrabM = 0, percDescINSS = 0, salarioL = 0;
    puts("Insira o valor da hora aula");
    scanf("%f", &horaAula);
    puts("Insira o valor do percentual do INSS");
    scanf("%f", &percDescINSS);
    puts("Insira a quantidade de horas trabalhadas pelo servidor");
    scanf("%f", &hTrabM);
    salarioL = ((horaAula*hTrabM) - ((horaAula*hTrabM)*(percDescINSS/100)));
    printf("%.2f %.2f",salarioL, (horaAula*hTrabM));
}
int main(int argc, char const *argv[])
{
    salLiquiProf();
    return 0;
}
