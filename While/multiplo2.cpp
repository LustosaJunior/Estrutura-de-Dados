
/* 51) Fa�a um programa que calcule os 10 primeiros n�meros m�ltiplos de 2 maiores ou iguais a 
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
		printf("O n�mero %d � m�ltiplo de 2.\n",resp);
		n++;
	}
	getch();
	return 0;
}

