#include <stdio.h>
#include <stdlib.h>

double fat(n){
	double fatorial;
	
	if (n <= 1){
		return 1;
	}
	else{
		fatorial = n * fat(n - 1);
		return fatorial;
	} 
}

int main(){
	int num;
	double fatorial;
	printf("Digite um numero para saber o fatorial: ");
	scanf("%d", &num);
	
	fatorial = fat(num);
	
	printf("O fatorial e : %.0lf\n", fatorial);
	
	system("pause");
	return 0;
}
