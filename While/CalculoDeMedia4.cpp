/* 58. Calcular a m�dia aritm�tica de 3 notas de 3 alunos. */


#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	float n1, n2, n3, media;
	int alunos = 0;
	

   
    do {
    	
    	printf("Digite a primeira nota: ");
		scanf("%f", &n1);
		
		printf("Digite a segunda nota: ");
		scanf("%f", &n2);
		
		printf("Digite a terceira nota: ");
		scanf("%f", &n3);
		
		media = (n1 + n2 + n3)/3;
		
		printf("A m�dia � %.2f. \n\n", media);
		
		alunos++;
		
	} while (alunos < 3);

	getch();
	return 0;
}

