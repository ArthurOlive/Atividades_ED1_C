#include <stdio.h>
#include <stdlib.h>

//Questão 02
int main(){
	int idade = 19;      
	float altura = 1.84; 
	char letra = 'A';
	char nome [] = "Arthur Vitor Matias de Oliveira";
	
	printf("Idade: %d\n", idade);
	printf("Altura: %.2f\n", altura);
	printf("Primeira letra do nome: %c\n", letra);
	printf("Nome completo: %s \n", nome);
	
	system("pause");
	return 0;
}
