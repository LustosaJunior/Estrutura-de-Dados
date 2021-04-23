/*41) Dado um número inteiro indicando uma operação num caixa eletrônico, informe a opção correspondente:
 1 - saldo, 2 - extrato, 3 - saque, 4 - sair.
  */

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int number;
	
	printf("Informe a operação que o caixa deve fazer. \n1 - saldo \n2 - extrato \n3 - saque \n4 - sair \n\nOpção: ");
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
		
		default: printf("Opção inválida");
	}
	getch();
	return 0;
}
