/* 54) Escreva um programa que mostra todos os n�meros impares de 2 at� 50. (Use: enquanto e se)
 */
 
 # include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n = 1;
	
	while (n<=50){
		if(n%2==1){
			printf("O n�mero %d � impar.\n",n);
		}
		n++;
	}
	
	getch();
	return 0;
}
