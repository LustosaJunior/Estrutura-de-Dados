
/* 59. Fa�a um programa que calcule os 20 primeiros n�meros m�ltiplos de 3 maiores que zero */


#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
 	
 	int number = 1, cont;
 	
 	do {
 		
		cont = number*3;
 
 		printf("O n�mero %d � m�ltiplo de 3\n", cont);
		
		number++;
	 }
	 while(number <= 20);
	getch();
	return 0;
}
