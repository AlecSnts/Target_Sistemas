#include<stdio.h>
#include<locale.h>

/*
2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores 
(exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, 
ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.
*/

main(){
	int i = 0, num;
	int ult = 1, pen = 0;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Escolha um número:  ");
	scanf("%d", &num);
	
	while(i < num){
		i = ult + pen;
		pen = ult;
		ult = i;
	}
	
	if(i == num){ printf("\nO número %d pertence a sequência de Fibonacci!\n", num); }
	else{ printf("\nO número %d não pertence a sequência de Fibonacci!\n", num); }
	
	return 0;
}
