#include <stdio.h>
#include <locale.h> //bibliot�ca que resolve a acentua��o da String

int main(){
	
	setlocale(LC_ALL, "Portuguese"); //Chama a biblioteca de acentua��o
	
	int lado_quadrado,perimetro_quadrado;
	
	printf("Digite o lado para saber o perimetro de um quadrado: \n");
	
	scanf("%d",&lado_quadrado);
	
	perimetro_quadrado = lado_quadrado * 4;
	
	printf("\nO per�metro �: %d",perimetro_quadrado);
	
	return 0;
}
