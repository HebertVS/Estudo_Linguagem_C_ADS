#include <stdio.h>
#include <locale.h> //bibliot�ca que resolve a acentua��o da String

int main(){
	
	setlocale(LC_ALL, "Portuguese"); //Chama a biblioteca de acentua��o
	
	int lado,area;
	
	printf("Digite o lado para saber a area de um quadrado: \n");
	
	scanf("%d",&lado);
	
	if(lado%2>0){
		printf("Valor invalido!");
	}
	else{
		
		area = (lado * lado)/2;
		printf("\nA �rea do quadrado �: %d",area);
	}
	
	return 0;
}
