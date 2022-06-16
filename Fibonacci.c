#include<stdio.h>
#include<locale.h>

/*
2) Dado a sequ�ncia de Fibonacci, onde se inicia por 0 e 1 e o pr�ximo valor sempre ser� a soma dos 2 valores anteriores 
(exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um n�mero, 
ele calcule a sequ�ncia de Fibonacci e retorne uma mensagem avisando se o n�mero informado pertence ou n�o a sequ�ncia.
*/

main(){
	int i = 0, num;
	int ult = 1, pen = 0;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Escolha um n�mero:  ");
	scanf("%d", &num);
	
	while(i < num){
		i = ult + pen;
		pen = ult;
		ult = i;
	}
	
	if(i == num){ printf("\nO n�mero %d pertence a sequ�ncia de Fibonacci!\n", num); }
	else{ printf("\nO n�mero %d n�o pertence a sequ�ncia de Fibonacci!\n", num); }
	
	return 0;
}
