#include <stdio.h>
#include <stdlib.h>

void invect(int * vect, int * inv, int len){
	int i;
	int j = 0;
	for (i = len - 1; i >= 0; i -- ){
		inv[j] = vect[i];
		j ++;
	}
}

void printVect(int * vect, int len){
 	int i;
 	for (i = 0; i < len; i++){
 		printf("%d ", vect[i]);
	}
	printf("\n");
}

int main(){
	int vect[3];
	int inv [3];
	int i;
	for (i = 0; i < 3; i ++){
		printf("Digite um numero: ");
		scanf("%d", &vect[i]);
	}
	
	invect(vect, inv, 3);
	
	printf("Vetor original: \n");
	printVect(vect, 3);
	printf("Vetor invertido: \n");
	printVect(inv, 3);
	
	system("pause");
	return 0;
	
}
