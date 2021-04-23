/*56) O critério de aprovação em uma determinada escola para que um aluno seja promovido é a 
média maior ou igual a 7 e ter no mínimo 75% de frequência durante o ano. O cálculo da média 
final é feito a partir da média aritmética entre quatro médias recebidas durante o ano. Faça um 
programa que receba as quatro notas e a quantidade de faltas de cada turma da escola (cada sala 
tem 40 alunos), sabendo que foram 200 dias letivos. Para cada aluno o programa deverá calcular 
a média final e avaliar a quantidade de faltas, informando se o aluno está “Aprovado” ou
“Reprovado por nota” ou “Reprovado por falta”.
  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, n4, media;
	int qf,aluno=1;
	
	while (aluno<=40){
		printf("Digite a primeira média: ");
		scanf("%f",&n1);
		
		printf("Digite a segunda média: ");
		scanf("%f",&n2);
		
		printf("Digite a terceira média: ");
		scanf("%f",&n3);
		
		printf("Digite a quarta média: ");
		scanf("%f",&n4);
		
		printf("Digite a quantidade de faltas: ");
		scanf("%d",&qf);
		
		media=(n1+n2+n3+n4)/4;
		
		if (qf>50){
			printf ("Você teve %d faltas. Você está reprovado.\n\n",qf);
		}
		else
		if (media>=7){
			printf("Sua média final é %.2f.\n Sua quantidade de faltas é %d.\n Você está aprovado.\n\n",media,qf);
		}
		else{
			printf("Sua média final é %.2f.\n Sua quantidade de faltas é %d.\n Você está reprovado.\n\n",media,qf);
		}
		aluno++;	
	}
	getch();
	return 0;
}

