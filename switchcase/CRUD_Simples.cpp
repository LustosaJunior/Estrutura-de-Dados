/* 64. Fa�a im programa que apresente um menu de op��es conforme especificado abaixo, mostre na tela a op��o escolhida, saindo apenas quando for digitado o n�mero 5.
menu de op��es:
1 - Incluir
2 - Consultar
3 -	Alterar
4 -	Imprimir
5 - Sair */


#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int choice;

	do {
		
	 	printf("\n\nInforme a opera��o que o caixa deve fazer. \n1 - Incluir \n2 - Consultar \n3 - Alterar \n4 - Imprimir \n5 - Sair \n\nOp��o: ");
		scanf("%i", &choice);
	
		switch(choice) {
		
			case 1: printf("\nIncluir");
			break;
			
			case 2: printf("\nConsultar");
			break;
			
			case 3: printf("\nAlterar");
			break;
			
			case 4: printf("\nImprimir");
			break;
			
			case 5: printf("\nSair");
			break;
			
			default: printf("\nOp��o inv�lida");
			
	}
	
	} while (choice != 5);

	getch();
	return 0;
}

