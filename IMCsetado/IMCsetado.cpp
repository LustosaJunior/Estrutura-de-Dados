/*43) Dados os sexo e a altura de uma pessoa, determine seu peso ideal, de acordo com as f�rmulas a seguri:
- para homens o pseo ideal � 72.7*altura-58
- para mulheres o peso ideal � 62.1*altura-44.7
*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float height, weight;
	char sex;
	
	printf("Informe seu sexo, M para maculino e F para femino: ");
	scanf("%c", &sex);
	printf("Informe sua altura: ");
	scanf("%f", &height);
	
	switch(sex){
		
		case 'M':  case 'm': weight = 72.7 * height - 58;
		printf("seu peso ideal � %.2f", weight);
		break;
		
		case 'F':  case 'f' : weight = 62.1 * height - 44.7;
		printf("seu peso ideal � %.2f", weight);
		break;
	
		default: printf("Op��o inv�lida");
	
	}
	
	getch();
	return 0;
}
