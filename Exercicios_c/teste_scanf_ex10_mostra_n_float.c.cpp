#include <stdio.h>
#include <locale.h> //bibliot�ca que resolve a acentua��o da String

int main(){
	
	setlocale(LC_ALL, "Portuguese"); //Chama a biblioteca de acentua��o
	
	float n;
	
	printf("Entre com um num�ro qualquer: \n");
	
	scanf("%f",&n);
	
	printf("\nO caractere entrado foi: %.3f",n);
	
	return 0;
}
