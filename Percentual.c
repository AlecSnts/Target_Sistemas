#include<stdio.h>
#include<locale.h>

/*
4) Dado o valor de faturamento mensal de uma distribuidora, detalhado por estado:

SP – R$67.836,43
RJ – R$36.678,66
MG – R$29.229,88
ES – R$27.165,48
Outros – R$19.849,53

Escreva um programa na linguagem que desejar onde calcule o percentual de representação que cada estado teve dentro do valor total mensal da distribuidora.
*/

main(){
	float sp = 67836.43;
	float rj = 36678.66;
	float mg = 29229.88;
	float es = 27165.48;
	float outros = 19849.53;
	float total;
	setlocale(LC_ALL, "Portuguese");
	
	total = sp + rj + mg + es + outros;
	
	printf("** DISTRIBUIDORA **\n\n");
	printf("Percentual de faturamento:\n\n");
	printf("São Paulo [R$ %.2f] [%.2f%%]\n", sp, (sp/total)*100);
	printf("Rio de Janeiro [R$ %.2f] [%.2f%%]\n", rj, (rj/total)*100);
	printf("Minas Gerais [R$ %.2f] [%.2f%%]\n", mg, (mg/total)*100);
	printf("Espírito Santo [R$ %.2f] [%.2f%%]\n", es, (es/total)*100);
	printf("Outros [R$ %.2f] [%.2f%%]\n", outros, (outros/total)*100);
	printf("\nTOTAL DE VENDAS: R$ %.2f\n", total);
	
	return 0;
}
