
# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	
	if(idade < 1){
		printf("Voc� ainda n�o pode nadar.");	
	}else if(idade <= 10){
		printf("Sua categoria � infantil porque � inferior a 11 anos");	
	}else if(idade <= 17){
		printf("Sua categoria � juvenil porque � inferior a 18 anos");
	}else{
		printf("Sua categoria � senior porque � superior a 17 anos");
	}
	
	getch();
	return 0;
}
