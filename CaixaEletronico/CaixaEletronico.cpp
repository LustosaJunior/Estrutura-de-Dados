/*41) Dado um n�mero inteiro indicando uma opera��o num caixa eletr�nico, informe a op��o correspondente:
 1 - saldo, 2 - extrato, 3 - saque, 4 - sair.
  */

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int number;
	
	printf("Informe a opera��o que o caixa deve fazer. \n1 - saldo \n2 - extrato \n3 - saque \n4 - sair \n\nOp��o: ");
	scanf("%i", &number);
	
	switch(number) {
		case 1: printf("Saldo");
		break;
		
		case 2: printf("Extrato");
		break;
		
		case 3: printf("Saque");
		break;
		
		case 4: printf("Sair");
		break;
		
		default: printf("Op��o inv�lida");
	}
	getch();
	return 0;
}
