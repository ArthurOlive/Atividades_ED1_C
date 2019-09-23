#include <stdio.h>
#include <stdlib.h>

//Questão 18_b
int main(){
	int a, b;
	
	printf("Digite o primeiro numero do intervalo: ");
	scanf("%d", &a);
	printf("Digite o segundo numero do intervalo: ");
	scanf("%d", &b);
	
	if (b > a && b != a){
		do{
			if (a % 2 != 0){
				printf("%d ", a);
				a ++;
			} else {
				a ++;
			}
		} while (a <= b);
	} else if (b != a){
		do{
			if (a % 2 != 0){
				printf("%d ", a);
				a ++;
			} else {
				a ++;
			}
		} while (a >= b);
	} else {
		printf("%d", a);
	}
	printf("\n");
	
	system("pause");
	return 0;
}
