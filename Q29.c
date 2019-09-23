#include <stdio.h>
#include <stdlib.h>

int hVect(int * vect, int len){
	int maior;
	int mask;
	int i;
	
	for (i = 0; i < len; i++){
		mask = vect[i];
		if (maior < mask && i > 0){
			maior = mask;
		} else if(i == 0){
			maior = mask; //inicialização
		}
	}
	
	return maior;
}

int lVect(int * vect, int len){
	int menor;
	int mask;
	int i;
	
	for (i = 0; i < len; i++){
		mask = vect[i];
		if (menor > mask && i > 0){
			menor = mask;
		} else if(i == 0){
			menor = mask; //inicialização
		}
	}
	
	return menor;
}
int main(){
	int vect[] = {12,2,15,9,12,6,7};
	
	printf("O maior numero e : %d \n", hVect(vect, 7));
	printf("O menor numero e : %d \n", lVect(vect, 7));
	
	system("pause");
	return 0;
}
