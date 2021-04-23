/* 54) Escreva um programa que mostra todos os números impares de 2 até 50. (Use: enquanto e se)
 */
 
 # include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n = 1;
	
	while (n<=50){
		if(n%2==1){
			printf("O número %d é impar.\n",n);
		}
		n++;
	}
	
	getch();
	return 0;
}
