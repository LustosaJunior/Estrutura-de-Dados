
/* 60. Fa�a um programa que calcule os 90 primeiros n�meros m�ltiplos de 7 maiores que zero */


#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
 	
 	int number = 1, cont;
 	
 	do {
 		
		cont = number*7;
 
 		printf("O n�mero %d � m�ltiplo de 7\n", cont);
		
		number++;
		
	 }
	 while(number <= 90);
	getch();
	return 0;
}

