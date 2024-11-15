#include <stdio.h>
#include <stdlib.h>

int soma(int valor){
	if(valor != 0){
		return valor + soma (valor - 1);
	}else{
		return valor;
	}
}

int main(){
	int resultado = soma(5);
	printf(resultado);
	system("pause");
	return 0;
}
