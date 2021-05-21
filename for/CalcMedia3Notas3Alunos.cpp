# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, media;
	int alunos;
	for(alunos=1;alunos<=3;alunos++){
		printf("Digite a primeira nota ");
		scanf("%f",&n1);
		printf("Digite a segunda nota ");
		scanf("%f",&n2);
		printf("Digite a terceira nota ");
		scanf("%f",&n3);
		media=(n1+n2+n3)/3;
		printf("A média é %.2f\n",media);
		if (media>=6){
			printf("Aprovado\n\n");
		}else{
				printf("Reprovado\n\n");
		}
	}
	getch();
	return 0;
}
