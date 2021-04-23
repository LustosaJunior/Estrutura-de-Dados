/* 44. Faça um programa que verifique qual a estação climática correspondente a um mês fornecido. 
O programa deve imprimir a estação: primavera, verão, outono ou inverno, considerando que são estações 
no Hemisfério Sul, conforme dados abaixo: 
-	Primavera: setembro/ outubro/ novembro
-	Verão: dezembro/ Janeiro/ Fevereiro
-	Outono: março/ abril/ maio
-	Inverno: junho/ julho/ agosto */



#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int month;
	
	printf("Insira o mês em forma numérica para descobrir em que estação ele está: ");
	scanf("%i", &month);
	
	switch(month){
		
		case 12: case 1: case 2: printf("Verão");
		break;
		
		case 3: case 4: case 5: printf("Outono");
		break;
		
		case 6: case 7: case 8: printf("Inverno");
		break;
		
		case 9: case 10: case 11: printf("Primavera");
		break;
		
		default: printf("Mês inválido");
		
	}
	getch();
	return 0;
}
