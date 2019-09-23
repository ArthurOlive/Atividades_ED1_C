#include <stdio.h>
#include <stdlib.h>

//Questão 20
int main(){
	int a, b, sum; 
		
	printf("Digite o primeiro numero do intervalo: ");
	scanf("%d", &a);
	printf("Digite o segundo numero do intervalo: ");
	scanf("%d", &b);
	
	if (b > a && b != a){
		for (; a <= b; a ++){
			sum += a;
		}
	} else if (b != a){
		for(; a >= b; a --){
			sum += a;
		}
	} else {
		sum = a;
	}
	
	printf("%d\n", sum);
	
	system("pause");
	return 0;
}
