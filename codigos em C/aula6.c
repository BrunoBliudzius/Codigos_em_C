#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i;
	int count;
	int numero = 0;
	int soma = 0;
	
	printf("digite o numero do contador: ");
	scanf("%d", &count);
	printf("Comecando programa \n");
	printf("............................... \n \n");

	for (i = 0; i < count; i++){
		printf("digite um numero: ");
		scanf("%d", &numero);
		soma = soma + numero;
		printf("A soma e: %d \n \n", soma);

	}
	
	system("pause");
	return 0;
}

