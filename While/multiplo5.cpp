
/*52) Fa�a um programa que calcule os 50 primeiros n�meros m�ltiplos de 5 maiores que zero. 
  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n=1, resp;
	while (n<=50){
		resp=n*5;
		printf("O n�mero %d � m�ltiplo de 5.\n",resp);
		n++;
	}
		
	getch();
	return 0;
}
