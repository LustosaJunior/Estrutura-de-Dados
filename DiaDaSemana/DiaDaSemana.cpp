/* 39) Escreva um algoritmo que pede a digita��o de um n�mero de 1 a 7 que represente o dia da semana, 
exibindo-o por extenso. */

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	printf("Digite um n�mero de 1 a 7 referente ao dia da semana que voc� deseja ");
	scanf("%d",&n);
	// if (n==1){
	//printf("Domingo");
	//}
	// else
	// if (n==2) ...
	switch (n){
		case 1: printf("Domingo");break;
		case 2: printf("Segunda-feira");break;
		case 3: printf("Ter�a-feira");break;
		case 4: printf("Quarta-feira");break;
		case 5: printf("Quinta-feira");break;
		case 6: printf("Sexta-feira");break;
		case 7: printf("S�bado");break;
		default: printf("Op��o Inv�lida");
	}
	getch();
	return 0;
}
