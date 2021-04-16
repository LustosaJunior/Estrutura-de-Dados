
# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	
	if(idade < 1){
		printf("Você ainda não pode nadar.");	
	}else if(idade <= 10){
		printf("Sua categoria é infantil porque é inferior a 11 anos");	
	}else if(idade <= 17){
		printf("Sua categoria é juvenil porque é inferior a 18 anos");
	}else{
		printf("Sua categoria é senior porque é superior a 17 anos");
	}
	
	getch();
	return 0;
}
