#include <stdio.h>
#include <stdlib.h>

//Questão 17_a
int main(){
	int a, b;
	
	printf("Digite o primeiro numero do intervalo: ");
	scanf("%d", &a);
	printf("Digite o segundo numero do intervalo: ");
	scanf("%d", &b);
	
	if (b > a && b != a){
		while(a <= b){
			printf("%d ", a);
			a ++;
		}
	} else if (b != a){
		while(a >= b){
			printf("%d ", a);
			a --;
		}
	} else {
		printf("%d", a);
	}
	
	printf("\n");
	
	system("pause");
	return 0;
}
