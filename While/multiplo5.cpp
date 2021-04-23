
/*52) Faça um programa que calcule os 50 primeiros números múltiplos de 5 maiores que zero. 
  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n=1, resp;
	while (n<=50){
		resp=n*5;
		printf("O número %d é múltiplo de 5.\n",resp);
		n++;
	}
		
	getch();
	return 0;
}
