/* 40) Dada uma letra (S, C, D ou V), informe o estado civil correspondente por extenso (solteiro, casado, 
Divorciado ou Viúvo).
 */
 
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char estado;
	
	printf("Digite a inicial do seu estado civil");
	printf("\nS = Solteiro; C = Casado; D = Divorciado; V = Viuvo:  ");
	scanf("%s", &estado);

	
		switch(tolower(estado)) {
		case 's': 
			printf("Solteiro(a)"); 
			break;
		case 'c':
			printf("Casado(a)");
			break;
		case 'd': 
			printf("Divorciado(a)");
			break;
		case 'v': 
			printf("Viuvo(a)");
			break;
		defaut:
			printf("Selecione uma opção valida");
		
	}

	getch();
	return 0;
}
