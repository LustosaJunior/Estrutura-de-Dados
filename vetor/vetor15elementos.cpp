/* 79)Faça um programa que tenha um vetor de inteiros com 15 elementos. O programa deve ler 
valores para o vetor, calcular e imprimir a soma dos valores múltiplos de 3.
 */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# define t 75

int main(){
	setlocale(LC_ALL, "Portuguese");
int i, n[t], soma=0;
for(i=0;i<t;i++){
	printf("Digite os números ");
	scanf("%d",&n[i]);
}
for(i=0;i<t;i++){
	if(n[i]%3==0){
		soma=soma+n[i];
	}
}
printf("A soma dos múltiplos de 3 digitados por você é %d.",soma);
	getch();
	return 0;
}
