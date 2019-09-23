#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Duvidas sobre esse \n e \0 
void invStr(char * vect, int len){
	int i;
	int end = 0;
	for (i = len - 1; i >= 0; i --){
		if (end){
			printf("%c", vect[i]);
		}else if (vect[i] == '\n' || vect[i] == ' '){
			end = 1;
		}
	}
	printf("\n");
}

int main(){
	char palavra[40];
	
	printf("Digite uma frase de 40 caracteres : ");
	fgets(palavra, 40, stdin); 
	
	invStr(palavra, 40);
	
	system("pause");
	return 0;
}
