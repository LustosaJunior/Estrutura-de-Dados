
/* 78. Fa�a um programa que receba 15 valores reais que devem ser armazenados em um vetor. 
Ap�s a digita��o de todos os valores, mostre na tela todos os valores pela sua metade 
respectiva e imprima os resultados atuais.  */


# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int i;
float n[15];
for(i=0;i<15;i++){
	printf("Digite um n�mero ");
	scanf("%f",&n[i]);
}
for(i=0;i<15;i++){
n[i]=n[i]/2;
printf("A metado do valor digitado � %.2f\n",n[i]);
}
	getch();
	return 0;
}
