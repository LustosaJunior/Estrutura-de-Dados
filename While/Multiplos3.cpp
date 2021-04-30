
/* 59. Faça um programa que calcule os 20 primeiros números múltiplos de 3 maiores que zero */


#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
 	
 	int number = 1, cont;
 	
 	do {
 		
		cont = number*3;
 
 		printf("O número %d é múltiplo de 3\n", cont);
		
		number++;
	 }
	 while(number <= 20);
	getch();
	return 0;
}
