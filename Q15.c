#include <stdio.h>
#include <stdlib.h>

//Quest�o 15
int main(){
	int n; 
	
	printf("Digite um numero : ");
	scanf("%d", &n);
	
	switch(n){
		case 1:
			printf("Um\n");
			break;
		case 2:
			printf("Dois\n");
			break;
		case 3:
			printf("Tres\n");
			break;
		case 4:
			printf("Quatro\n");
			break;
		case 5:
			printf("Cinco\n");
			break;
		default:
			printf("valor invalido\n");
			break;
	}	
	system("pause");
	return 0;
}
