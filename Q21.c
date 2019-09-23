#include <stdio.h>
#include <stdlib.h>

double fat(int n){
	double fatn = 1;
	
	while (n > 0){
		fatn *= n;
		n --; 
	}
	
	return fatn;
}

int main(){
	int n;
	
	printf("Digite um numero para saber o fatorial: ");
	scanf("%d", &n);
	
	printf("O fatorial e : %.0lf \n ", fat(n));
	
	system("pause");
	return 0;
}
