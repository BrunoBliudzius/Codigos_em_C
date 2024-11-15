#include <stdio.h>
#include <stdlib.h>

int main(){
	int dia,mes,ano;
	dia;
	mes = 04;
	ano = 2024;
	printf("Digite o dia: ");
	scanf("%d", &dia);
	printf("Digite o mes: ");
	scanf("%d", &mes);
	printf("Digite o ano: ");
	scanf("%d", &ano);
	
	
	float saldo;
	printf("Digite o saldo da conta: ");
	scanf("%f", &saldo);
	printf("o seu saldo é de: %.2f \n", saldo);
	
	double salario;
	printf("Digite o salario: ");
	scanf("%f", &salario);
	
	
	
	printf("Ola %d/ %d/ %d \n", dia,mes,ano);
	printf("O seu saldo e: %f \n", saldo);
	printf("O seu salario e: %f \n", salario);
	system("pause");
	return 0;
}
