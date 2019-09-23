#include <stdio.h>
#include <stdlib.h>

void printVect(int * vect, int len){
 	int i;
 	for (i = 0; i < len; i++){
 		printf("%d ", vect[i]);
	}
	printf("\n");
}

//vetor, tamanho do vetor, posição inicial/posicao do valor, posicao final/posicao final do valor inicial
void moveLessVect(int * vect, int len, int bg, int end){
	int mask, n, epoca;
	n = bg - 1;
	epoca = 0; //contador de loop
	printf("Epoca %d: ", epoca);
	printVect(vect, len); //para exibir o valor inicial
	//enquanto o numero nao estiver na posição 0
	while(vect[end - 1] != vect[n]){
		mask = vect[n - 1];
		vect[n - 1] = vect[n];
		vect[n] = mask;
		
		n --; //para mudar para o indice correto e passar para mais 1
		
		printf("Epoca %d: ", ++epoca);
		printVect(vect, len);//para exibir o progresso
	}
}


int main(){
	int vect[] = {1,2,3,4,5,6};
	
	moveLessVect(vect, 6, 6, 1);
	
	system("pause");
	return 0;
}
