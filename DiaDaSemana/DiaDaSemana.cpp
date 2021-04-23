/* 39) Escreva um algoritmo que pede a digitação de um número de 1 a 7 que represente o dia da semana, 
exibindo-o por extenso. */

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	printf("Digite um número de 1 a 7 referente ao dia da semana que você deseja ");
	scanf("%d",&n);
	// if (n==1){
	//printf("Domingo");
	//}
	// else
	// if (n==2) ...
	switch (n){
		case 1: printf("Domingo");break;
		case 2: printf("Segunda-feira");break;
		case 3: printf("Terça-feira");break;
		case 4: printf("Quarta-feira");break;
		case 5: printf("Quinta-feira");break;
		case 6: printf("Sexta-feira");break;
		case 7: printf("Sábado");break;
		default: printf("Opção Inválida");
	}
	getch();
	return 0;
}
