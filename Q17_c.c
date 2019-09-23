#include <stdio.h>
#include <stdlib.h>

//Questão 17_c
int main(){
	int a, b; 
		
	printf("Digite o primeiro numero do intervalo: ");
	scanf("%d", &a);
	printf("Digite o segundo numero do intervalo: ");
	scanf("%d", &b);
	
	if (b > a && b != a){
		for (; a <= b; a ++){
			printf("%d ", a);
		}
	} else if (b != a){
		for(; a >= b; a --){
			printf("%d ", a);
		}
	} else {
		printf("%d", a);
	}
	
	printf("\n");
	
	system("pause");
	return 0;
}
