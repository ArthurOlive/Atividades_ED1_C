#include <stdio.h>
#include <stdlib.h>

//ta funcionando, porem tenho duvidas na parte da arquitetura disso ai.
int main(){
	int * vect;
	int ** mat;
	int lines, col;
	int i, j;
	
	printf("Digite a quantidade de linhas: ");
	scanf("%d", &lines);
	
	printf("Digite a quantidade de colunas: ");
	scanf("%d", &col);
	
	mat = (int **) malloc(lines * sizeof(int *));
	for (i = 0; i < lines; i++){
		vect = (int *) malloc(col * sizeof(int)); //varias vezes
		mat[i] = vect; //nao sei se esta certo
		for (j = 0; j < col; j++){
			printf("Digite o numero da matriz[%d][%d]: ", i, j);
			scanf("%d", &vect[j]);
		}
	}
	
	printf("\nMatriz\n");
	//exibindo
	for (i = 0; i < lines; i++){
		for (j = 0; j < col; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	//para desalocar as linhas 
	for (i = 0; i < lines; i++){
		free(mat[i]);
	}
	free(mat);
	
	system("pause");
	return 0;
}
