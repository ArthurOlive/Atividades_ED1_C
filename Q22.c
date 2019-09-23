#include <stdio.h>
#include <stdlib.h>

int prim(int n){
	int mask;
	int test = 1;
	if (n < 2){
		test = 0;
	}
	if (n % 2 == 0){
		mask = n/2;
	} else {
		mask = (n-1)/2;
	}
	while (mask > 1 && test){
		if (n % mask != 0){
			mask --;
		} else {
			test = 0;
		}
	}
	return test;
}

int main(){
	int n, i;
	printf("Digite um numero para saber se ele e primo: ");
	scanf("%d", &n);

	if (prim(n)){
		printf("%d e primo.\n", n);
	} else {
		printf("%d nao e primo.\n", n);
	}
	
	printf("\n");
		
	system("pause");
	return 0;
}
