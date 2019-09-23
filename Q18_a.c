#include <stdio.h>
#include <stdlib.h>

//Questão 18_a
int main(){
	int a, b;
	
	printf("Digite o primeiro numero do intervalo: ");
	scanf("%d", &a);
	printf("Digite o segundo numero do intervalo: ");
	scanf("%d", &b);
	
	if (b > a && b != a){
		while(a <= b){
			if (a % 2 != 0){
				printf("%d ", a);
				a ++;
			} else {
				a ++;
			}
		}
	} else if (b != a){
		while(a >= b){
			if (a % 2 != 0){
				printf("%d ", a);
				a ++;
			} else {
				a ++;
			}
		}
	} else {
		printf("%d", a);
	}
	
	printf("\n");
	
	system("pause");
	return 0;
}
