/* 62. Faça um programa que receba 10 números inteiros positivos quaisquer, calcule e mostre na tela o dobro dos valores pertencentes ao intervalo: 5< x <20. (do .. while e if)*/


#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int number, x2, cont = 0;
	
	do { 
		
			
		printf("Informe um número inteiro: ");
		scanf("%i", &number);
		
		if(number > 5 && number < 20){
			
			x2 = number*2;
			
			printf("O dobro do número %i é %i\n",number, x2);
		}
		
		cont++;
		
	} while(cont < 10);
	
	getch();
	return 0;
}

