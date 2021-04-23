
/* 45. Faça um programa que leia três números inteiros, sendo que o primeiro corresponde a um código 
e os outros dois correspondem a operando para o cálculo do produto notável entre os mesmos com base na 
tabela abaixo:
CÓDIGO	PRODUTO NOTÁVEL						FÓRMULA
1	 	Quadrado da diferença			(a - b)*(a - b)
2		Quadrado da soma				(a + b)*(a + b)
3		Soma do quadrado				(a*a)+(b*b)
4		Diferença do quadrado			(a*a)-(b*b)
5		Produto da soma pela diferença 	(a + b)*(a - b)

Testar: Cod 1: a=12 e b=2 => resp=100 ; Cod 2: a=12 e b=2 => resp=196; 
Cod 3: a=12 e b=2 => resp=148; Cod 4: a=12 e b=2 => resp=140; Cod 5: a=12 e b=2 => resp=140

 */


#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int cod, number1, number2, res;
	printf("Informe o número equivalente a operação que deseja fazer sendo:  \n1 - Quadrado da diferença	\n2 - Quadrado da soma \n3 - Soma do quadrado \n4 - Diferença do quadrado \n5 - Produto da soma pela diferença \n\nOpção: ");
	scanf("%i", &cod);
	
	printf("\nAgora informe o primeiro valor: ");
	scanf("%i", &number1);

	printf("\nInforme o segundo valor: ");
	scanf("%i", &number2);
	
	switch(cod) {
		
		case 1: res = (number1 - number2) * (number1 - number2);
			printf("\n%.2i", res);
		break;
		
		case 2: res = (number1 + number2) * (number1 + number2);
			printf("\n%.2i", res);
		break;
		
		case 3: res = (number1 * number1) + (number2 * number2);
			printf("\n%.2i", res);
		break;
		
		case 4: res = (number1 * number1) - (number2 * number2);
			printf("\n%.2i", res);
		break;
		
		case 5: res = (number1 + number2) * (number1 - number2);
			printf("\n%.2i", res);
		break;
		
		default: printf("Opção inválida");
		
	}
	
	getch();
	return 0;
}
