#include<stdio.h>
#include<locale.h>
#include<string.h>

/*
5) Escreva um programa que inverta os caracteres de um string.

IMPORTANTE:
a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;
b) Evite usar funções prontas, como, por exemplo, reverse;
*/

main(){
	char palavra[100], palavra_invertida[100];
	int i, size;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Insira uma palavra (máx: 100 letras):  ");
	fflush(stdin);
	scanf("%[^\n]s", palavra);
	size = strlen(palavra);
	
	for(i = 0; i < size; i++){
		palavra_invertida[i] = palavra[size - (i+1)];
	}
	
	printf("\n\nPALAVRA: %s", palavra);
	printf("\nPALAVRA INVERTIDA: %s", palavra_invertida);
	
	return 0;
}
