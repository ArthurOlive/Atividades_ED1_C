#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int cont; 
	char ch;
	char * frase;
	int i, j, quantP, quantL, rep;
	char * palavra;
	char ** spinFrase;
	FILE * arq;
	
	arq = fopen("frase.txt", "r"); //modo leitura
	
	if (arq == NULL ){
		return 1;
	}
	
	cont = 2; // por conta do \n
	while (fgetc(arq) != EOF){
		cont ++;
	}
	
	rewind(arq); //volta para o inicio do arquivo
		
	frase = (char *) malloc(cont * sizeof(char)); 
	
	fgets(frase, cont, arq);
	frase[21] = '\n'; //so para indicar o fim da frase
	frase[22] = '\0';
	
	printf("Frase: %s\n", frase);
	printf("Quantidade de letras = %d\n", strlen(frase));
	
	fclose(arq);

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
	
	printf("\nQuantidade de palavras %d.\n", quantP);
		
	//printa na tela:
	for (i = 0; i < quantP; i ++){
		rep = 0;
		for (j = 0; j < quantP; j ++){
			if (!strcmp(spinFrase[i], spinFrase[j]) && j >= i){
				rep ++;
			} else if (!strcmp(spinFrase[i], spinFrase[j]) && j < i){
				rep = 0; //resetar a quantidade da contagem
				j = quantP; //encerra o loop
			}
		}
		if (rep){
			printf("%s = %d   ", spinFrase[i], rep);
		}
	}
	printf("\n");
	
	//limpa a memoria 
	for (i = 0; i < quantP; i ++){
		free(spinFrase[i]); //limpa as palavras da memoria 
	}
	free(spinFrase);
	free(frase);
	system("pause");
	return 0;
}
