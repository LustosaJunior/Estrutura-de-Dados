/*68) Faça um programa que calcule e imprima os 20 primeiros números pares maiores que zero.*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n, resp;
	for(n=1;n<=20;n++){
		resp=n*2;
			printf("O número %d é par.\n",resp);
	}
	
	getch();
	return 0;
}
