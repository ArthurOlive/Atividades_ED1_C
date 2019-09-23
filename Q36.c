#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char palavra [30];
	char i, j;
	int k, teste, cont;
	i = 65;
	j = 97;
	

	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	
	while (i <= 90){
		teste = 0;
		cont = 0;
		for (k = 0; k < strlen(palavra); k++){
			if (i == palavra[k] && teste == 0){
				printf("%c = ", i);
				teste = 1;
			} 
			if (i == palavra[k]){
				cont++;
			}
		}
		if (teste){
			printf("%d  ", cont);
		}
		i ++;
	}
	
	while (j <= 122){
		teste = 0;
		cont = 0;
		for (k = 0; k < strlen(palavra); k++){
			if (j == palavra[k] && teste == 0){
				printf("%c = ", j);
				teste = 1;
			} 
			if (j == palavra[k]){
				cont++;
			}
		}
		if (teste){
			printf("%d  ", cont);
		}
		j ++;
	}
	
	printf("\n");
	system("pause");
	return 0;
}
