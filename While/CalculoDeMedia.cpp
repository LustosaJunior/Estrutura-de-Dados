/*56) O crit�rio de aprova��o em uma determinada escola para que um aluno seja promovido � a 
m�dia maior ou igual a 7 e ter no m�nimo 75% de frequ�ncia durante o ano. O c�lculo da m�dia 
final � feito a partir da m�dia aritm�tica entre quatro m�dias recebidas durante o ano. Fa�a um 
programa que receba as quatro notas e a quantidade de faltas de cada turma da escola (cada sala 
tem 40 alunos), sabendo que foram 200 dias letivos. Para cada aluno o programa dever� calcular 
a m�dia final e avaliar a quantidade de faltas, informando se o aluno est� �Aprovado� ou
�Reprovado por nota� ou �Reprovado por falta�.
  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, n4, media;
	int qf,aluno=1;
	
	while (aluno<=40){
		printf("Digite a primeira m�dia: ");
		scanf("%f",&n1);
		
		printf("Digite a segunda m�dia: ");
		scanf("%f",&n2);
		
		printf("Digite a terceira m�dia: ");
		scanf("%f",&n3);
		
		printf("Digite a quarta m�dia: ");
		scanf("%f",&n4);
		
		printf("Digite a quantidade de faltas: ");
		scanf("%d",&qf);
		
		media=(n1+n2+n3+n4)/4;
		
		if (qf>50){
			printf ("Voc� teve %d faltas. Voc� est� reprovado.\n\n",qf);
		}
		else
		if (media>=7){
			printf("Sua m�dia final � %.2f.\n Sua quantidade de faltas � %d.\n Voc� est� aprovado.\n\n",media,qf);
		}
		else{
			printf("Sua m�dia final � %.2f.\n Sua quantidade de faltas � %d.\n Voc� est� reprovado.\n\n",media,qf);
		}
		aluno++;	
	}
	getch();
	return 0;
}

