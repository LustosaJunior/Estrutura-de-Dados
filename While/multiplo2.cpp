
/* 51) Faça um programa que calcule os 10 primeiros números múltiplos de 2 maiores ou iguais a 
zero. 
 */

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n=0, resp;
	while (n<10){
		resp=n*2;
		printf("O número %d é múltiplo de 2.\n",resp);
		n++;
	}
	getch();
	return 0;
}

