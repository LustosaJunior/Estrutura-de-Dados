/*55) Fa�a um programa que aceite somente um n�mero inteiro que esteja entre os n�meros 10 e 
50. O programa s� ser� encerrado quando a regra acima for cumprida. Mostre o valor digitado.
  */
  
# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	bool trava = true;
	
	while (trava){
		printf("Digite um n�mero entre 10 e 50: ");
		scanf("%d",&n);
	
		if(n > 10 && n < 50){
			printf("Voc� digitou %d", n);
			trava = false;
		}
	}
	
	getch();
	return 0;
}
