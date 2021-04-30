/* 61. Faça um programa que calcule e imprima a média dos múltiplos de 4 e 6 que estão entre 0 e 100.*/



# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
float media;
int n=0, qtd=0, soma=0;
do{
	if(n%4==0 && n%6==0){
		printf("O número %d é múltiplo de 4 e 6.\n",n);
		soma=soma+n;
		qtd=qtd+1;
		//qtd++
	}
	n++;
}
while(n<=100);
printf ("A soma de todos os múltiplos de 4 e 6 entre 0 e 100 é %.2f\n",soma);
printf ("A quantidade de números múltiplos de 4 e 6 entre 0 e 100 é %.d\n",qtd);
media=soma/qtd;
printf("A média dos múltiplos de 4 e 6 entre 0 e 100 é %.2f\n",media);

	getch();
	return 0;
}
