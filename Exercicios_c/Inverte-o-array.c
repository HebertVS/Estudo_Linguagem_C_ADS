#include <stdio.h>
// Inverte o array

#include <locale.h>

int main () {
setlocale(LC_ALL, "Portuguese");

printf ("\\n**************");
printf ("\\nInicio do programa ");

int vetor [5],i, trab;

for (i=0; i<5; i++){
	printf ("\\nEntre com o valor numerico inteiro: ");
	scanf("%d", &trab);
	vetor[i] = trab;
}

for (i=4; i>=0; i--){
	printf ("\\n%d", vetor[i]);
}

printf ("\\nfim do programa");
printf ("\\n**************");

return 0;
}