/* 42. O perfil de uma pessoa � dado pelo seu ano de nascimento.
Exemplo: Se o ano � 1987, calculamos a soma 19+87, dividimos seu resultado por 5 e pegamos o resto.
Este resto indica o perfil da pessoa: 0 - t�mido, 1 - sonhador, 2 - paquerador, 3 - atraente,
 4 - irresist�vel. Dado o ano de nascimento de uma pessoa, informe qual � o seu perfil. */


#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int year1, year2, sum;
	
	printf("Informe os dois primeiros digitos do ano em que voc� nasceu: ");
	scanf("%i", &year1);
	
	printf("Informe os dois �ltimos digitos do ano em que voc� nasceu: ");
	scanf("%i", &year2);
	
	sum = (year1 + year2) % 50;
	printf("Seu perfil �: ");
	
	switch(sum){
		
		case 0: printf("T�mido");
		break;
	
		case 1: printf("Sonhador");
		break;
		
		case 2: printf("Paquerador");
		break;
			
		case 3: printf("Atrante");
		break;
		
		case 4: printf("Irresist�vel");
		break;
		
	}
	getch();
	return 0;
}
