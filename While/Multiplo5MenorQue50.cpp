/* 63. Fa�a um programa que calcule os 50 primeiros n�meros m�ltiplos de 5 maiores que zero*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
 	
 	int number = 1, cont;
 	
 	do {
 		
		cont = number*5;
 
 		printf("O n�mero %d � m�ltiplo de 5\n", cont);
		
		number++;
		
	 }
	 while(number <= 50);
	getch();
	return 0;
}
