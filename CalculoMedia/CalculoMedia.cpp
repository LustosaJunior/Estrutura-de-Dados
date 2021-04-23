# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, media;
	int aluno = 0;
	
	while(aluno < 3){
		printf("Digite a primeira nota: ");
		scanf("%f",&n1);
		
		printf("Digite a segunda nota: ");
		scanf("%f",&n2);
		
		printf("Digite a terceira nota: ");
		scanf("%f",&n3);
		
		media = (n1 + n2 + n3) / 3;
		
		printf("Sua média é %.2f\n\n", media);
		
		aluno++;
	}
	
	getch();
	return 0;
}
