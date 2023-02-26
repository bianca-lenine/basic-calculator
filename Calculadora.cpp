#include <stdio.h>

int main(){
	
	int A, B, soma, sub, multi, div;
	
	printf("Informe o primeiro valor:\n");
	scanf("%d", &A);
	printf("Informe o segundo valor:\n");
	scanf("%d", &B);
	
	soma = A + B;
	sub = A - B;
	multi = A * B;
	div = A / B;
	
	printf("Resultados:\n");
	printf("Soma: %d.\n", soma);
	printf("Subtracao: %d.\n", sub);
	printf("Multiplicacao: %d.\n", multi);
	printf("Divisao: %d.\n", div);
	
}
