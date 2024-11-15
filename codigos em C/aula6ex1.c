#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i;
	int count;
	int multi = 0;
	
	printf("digite a tabuado que vc deseja mostrar: ");
	scanf("%d", &count);
	printf("Comecando programa \n");
	printf("............................... \n \n");

	for (i = 0; i <= 10; i++){
		multi = i * count;
		printf("%d x %d = %d \n", i, count, multi);
	}
	
	system("pause");
	return 0;
}

