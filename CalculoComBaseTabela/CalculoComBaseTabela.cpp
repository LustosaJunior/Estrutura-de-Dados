
/* 45. Fa�a um programa que leia tr�s n�meros inteiros, sendo que o primeiro corresponde a um c�digo 
e os outros dois correspondem a operando para o c�lculo do produto not�vel entre os mesmos com base na 
tabela abaixo:
C�DIGO	PRODUTO NOT�VEL						F�RMULA
1	 	Quadrado da diferen�a			(a - b)*(a - b)
2		Quadrado da soma				(a + b)*(a + b)
3		Soma do quadrado				(a*a)+(b*b)
4		Diferen�a do quadrado			(a*a)-(b*b)
5		Produto da soma pela diferen�a 	(a + b)*(a - b)

Testar: Cod 1: a=12 e b=2 => resp=100 ; Cod 2: a=12 e b=2 => resp=196; 
Cod 3: a=12 e b=2 => resp=148; Cod 4: a=12 e b=2 => resp=140; Cod 5: a=12 e b=2 => resp=140

 */


#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int cod, number1, number2, res;
	printf("Informe o n�mero equivalente a opera��o que deseja fazer sendo:  \n1 - Quadrado da diferen�a	\n2 - Quadrado da soma \n3 - Soma do quadrado \n4 - Diferen�a do quadrado \n5 - Produto da soma pela diferen�a \n\nOp��o: ");
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
		
		default: printf("Op��o inv�lida");
		
	}
	
	getch();
	return 0;
}
