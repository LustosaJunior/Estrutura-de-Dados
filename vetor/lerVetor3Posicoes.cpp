/* 76. Crie um programa que leia 3 valores para um vetor de 3 posi��es e depois calcule a m�dia dps valores acessando o vetor. */

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float media, soma=0, n[3];
	int i;
	for (i=0;i<3;i++){
		printf ("Digite um n�mero ");
		scanf("%f",&n[i]);
		soma=soma+n[i];
	}
	media=soma/i;
	//media=(n[0]+n[1]+n[2])/3;
	printf("A m�dia � %.2f",media);

	getch();
	return 0;
}
