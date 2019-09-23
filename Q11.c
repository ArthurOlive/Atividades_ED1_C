#include <stdio.h>
#include <stdlib.h>

//Questão 11
int main(){
	int n;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	
	if (n % 2 == 0){
		printf("O numero %d e par.\n", n);
	} else {
		printf("O numero %d e impar.\n", n);
	}
	
	system("pause");
	return 0;
}
