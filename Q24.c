#include <stdio.h>
#include <stdlib.h>

int main(){
	int vect[5];
	int i;
	
	//leitura
	for(i = 0; i < 5; i++){
		printf("Digite um valor: ");
		scanf("%d", &vect[i]);
	}
	
	//exibição
	for(i = 0; i < 5; i++){
		printf("%d ", vect[i]);
	}
	printf("\n");
	
	system("pause");
	return 0;
}
