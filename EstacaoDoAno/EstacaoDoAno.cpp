/* 44. Fa�a um programa que verifique qual a esta��o clim�tica correspondente a um m�s fornecido. 
O programa deve imprimir a esta��o: primavera, ver�o, outono ou inverno, considerando que s�o esta��es 
no Hemisf�rio Sul, conforme dados abaixo: 
-	Primavera: setembro/ outubro/ novembro
-	Ver�o: dezembro/ Janeiro/ Fevereiro
-	Outono: mar�o/ abril/ maio
-	Inverno: junho/ julho/ agosto */



#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int month;
	
	printf("Insira o m�s em forma num�rica para descobrir em que esta��o ele est�: ");
	scanf("%i", &month);
	
	switch(month){
		
		case 12: case 1: case 2: printf("Ver�o");
		break;
		
		case 3: case 4: case 5: printf("Outono");
		break;
		
		case 6: case 7: case 8: printf("Inverno");
		break;
		
		case 9: case 10: case 11: printf("Primavera");
		break;
		
		default: printf("M�s inv�lido");
		
	}
	getch();
	return 0;
}
