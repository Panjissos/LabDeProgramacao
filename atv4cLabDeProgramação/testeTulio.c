#include <stdio.h>

#define TAMANHO 100

int main () {
	char string [TAMANHO];
	int aux = 0;

	puts ("Entre com uma string:");
	
	gets(string);

	puts ("Tamanho da string:");
	while(*(string + aux) != '\0') ++aux;
	
	printf("%d\n", aux);//contador

	return 0;
}