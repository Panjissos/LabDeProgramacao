/*ATV22 A linguagem C pode representar letras mai ́usculas, letras min ́usculas e uma grande variedade de
s ́ımbolos especiais. O C usa internamente pequenos inteiros para representar cada caractere diferente.

O conjunto de caracteres que um computador utiliza e as representa ̧c ̃oes dos n ́umeros inteiros corres-
pondentes `aqueles caracteres  ́e chamado conjunto de caracteres do computador. Vocˆe pode imprimir

o n ́umero inteiro equivalente `a letra mai ́uscula A, por exemplo, executando a instru ̧c ̃ao

printf(”%d”, ’A’);
Escreva um programa em C que imprima os inteiros equivalentes a algumas letras mai ́usculas, letras
min ́usculas e s ́ımbolos especiais. No m ́ınimo, determine os n ́umeros inteiros equivalentes ao conjunto
seguinte: A BCabc 0 12 $ * + / e o caractere espa ̧co em branco.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("A:%d Esp:%d B:%d C:%d a:%d b:%d c:%d Esp:%d 0:%d Esp:%d 1:%d 2:%d Esp:%d $:%d *Esp:%d *:%d Esp:%d +:%d Esp:%d /:%d",'A',' ','B','C','a','b','c',' ','0',' ','1','2',' ','$',' ','*',' ','+',' ','/' );
    printf("\n%d",'*');
    return 0;
}
