#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void invStr(char * vect, int len){
	int i;
 	int j = 0;
	char nPalavra [len];
	int end = 0;
	for (i = len - 1; i >= 0; i --){
		if (end){
			nPalavra[j] = vect[i];
			j ++;
		}else if (vect[i] == '\n' || vect[i] == ' '){
			end = 1;
		}
	}
	printf("%s\n", nPalavra);
}

int main(){
	char palavra[40];
	
	printf("Digite uma frase de 40 caracteres : ");
	fgets(palavra, 40, stdin); 
	
	invStr(palavra, 40);
	
	system("pause");
	return 0;
}
