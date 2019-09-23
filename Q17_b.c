#include <stdio.h>
#include <stdlib.h>

//Questão 17_b
int main(){
	int a, b;
	
	printf("Digite o primeiro numero do intervalo: ");
	scanf("%d", &a);
	printf("Digite o segundo numero do intervalo: ");
	scanf("%d", &b);
	
	if (b > a && b != a){
		do{
			printf("%d ", a);
			a ++;
		} while (a <= b);
	} else if (b != a){
		do{
			printf("%d ", a);
			a --;
		} while (a >= b);
	} else {
		printf("%d", a);
	}
	printf("\n");
	
	system("pause");
	return 0;
}
