#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char frase[30]; 
	int i, quantP, quantL;
	char * palavra;
	char ** spinFrase;
	
	printf("Digite:  ");
	fgets(frase, 30, stdin);
	
	//====================== Cria a matriz dinamica =============================
	//Conta a quantidade de palavras 
	quantP = 0;
	for(i = 0; i < strlen(frase); i++){
		if(frase[i] == ' ' || frase[i] == '\n' ) {
			quantP ++;
		}
	}
	
	//alocar a memoria para ter o numero de ponteiros no vetor da frase
	spinFrase = (char **) malloc( quantP * sizeof(char *));
	
	
	quantP = 0;
	for(i = 0; i < strlen(frase); i++){
		if(frase[i] != ' ' && (frase[i] >= 'a' && frase[i] <= 'z')) {
			quantL ++;
		} else if (frase[i] == ' ' || frase[i] == '\n') {
			palavra = (char *) malloc((quantL + 1) * sizeof(char)); //cria a palavra
			spinFrase[quantP] = palavra;
			quantP ++;
			printf("Palavra %d, tem %d letras.\n", quantP, quantL);
			quantL = 0;
		}
	}	
	//===========================================================================
	
	quantP = 0;
	quantL = 0;
	for(i = 0; i < strlen(frase); i ++){
		if (frase[i] != ' ' && (frase[i] >= 'a' && frase[i] <= 'z')){
			spinFrase[quantP][quantL] = frase[i];
			quantL ++;
		} else if (frase[i] == ' ' || frase[i] == '\n') {
			spinFrase[quantP][quantL] = '\0'; //para indicar o fim da palavra 
			quantP ++;
			quantL = 0;
		}
	} 
	
	//printa na tela:
	for (i = 0; i < quantP; i ++){
		printf("%s\n", spinFrase[i]);
	}
	
	for (i = 0; i < quantP; i ++){
		free(spinFrase[i]); //limpa as palavras da memoria 
	}
	
	printf("\nQuantidade de palavras %d.\n", quantP);
	free(spinFrase);
	system("pause");
	return 0;
}
