/* 69) Fa�a um programa que calcule e imprima a m�dia dos 50 primeiros m�ltiplos de 2 e 3 
maiores que 999 e menores que 1300.
 */

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float media;
	int cont, soma=0, qtd=0;
	for(cont=1000;cont<1300;cont++){
		//for n=1000
		//for n=1001
		//for n=1002 ...
		//for n=1008
		if(cont%2==0 && cont%3==0){
			//if(1000%2==0 && 1000%3==0) => V && F = F => n�o entra no if
			//if(1001%2==0 && 1001%3==0) => F && F = F => n�o entra no if
			//if(1002%2==0 && 1002%3==0) => V && V = V => entra no if ...
			//if(1008%2==0 && 1008%3==0) => V && V = V => entra no if
			printf("O n�mero %d � m�ltiplo de 2 e 3.\n",cont);
			soma=soma+cont;
			//soma=0+1002=1002
			//soma=1002+1008=1010 ...
			qtd=qtd+1;
			//qtd=0+1=1
			//qtd=1+1=2 ...
		}
	}
	
	printf("A quantidade de n�meros m�ltiplos de 2 e 3 que est�o no intervalo entre 999 e 1300 � %d\n",qtd);
	printf("A soma de n�meros m�ltiplos de 2 e 3 que est�o no intervalo entre 999 e 1300 � %d\n",soma);
	media=soma/qtd;
	printf("A m�dia dos m�ltiplos de 2 e 3 que est�o no intervalo entre 999 e 1300 � %.2f\n",media);
	
	getch();
	return 0;
}
