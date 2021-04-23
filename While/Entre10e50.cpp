/*55) Faça um programa que aceite somente um número inteiro que esteja entre os números 10 e 
50. O programa só será encerrado quando a regra acima for cumprida. Mostre o valor digitado.
  */
  
# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	bool trava = true;
	
	while (trava){
		printf("Digite um número entre 10 e 50: ");
		scanf("%d",&n);
	
		if(n > 10 && n < 50){
			printf("Você digitou %d", n);
			trava = false;
		}
	}
	
	getch();
	return 0;
}
