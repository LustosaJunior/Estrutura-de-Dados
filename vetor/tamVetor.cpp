/*77) Crie um programa que leia uma quantidade de valores para um vetor de tamanho de 
posi��es definido pelo usu�rio e depois calcule a m�dia dos valores acessando o vetor.
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
	printf("Digite um n�mero ");
	// 1� n�mero = 5
	// 2� n�mero = 7
	scanf("%f",&n[i]);
	soma=soma+n[i];
	//soma=0+5=5
	//soma=5+7=12
}
media=soma/tamanho;
printf("A m�dia � %.2f",media);
	getch();
	return 0;
}
