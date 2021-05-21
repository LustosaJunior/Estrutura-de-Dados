/*77) Crie um programa que leia uma quantidade de valores para um vetor de tamanho de 
posições definido pelo usuário e depois calcule a média dos valores acessando o vetor.
  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int tamanho, i;
printf("Digite o tamanho do seu vetor ");
scanf("%d",&tamanho);
float media, soma=0, n[i];
for (i=0;i<tamanho;i++){
	printf("Digite um número ");
	// 1° número = 5
	// 2° número = 7
	scanf("%f",&n[i]);
	soma=soma+n[i];
	//soma=0+5=5
	//soma=5+7=12
}
media=soma/tamanho;
printf("A média é %.2f",media);
	getch();
	return 0;
}
