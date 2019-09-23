#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Questão 03
int main(){
	int idade;      
	float altura; 
	char letra;
	char nome [40];
	
	//leitura
	printf("Digite a sua idade : ");
	scanf("%d", &idade);
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	fflush(stdin); //para limpara o buff do teclado
	printf("Digite a primeira letra do nome: ");
	scanf("%c", &letra);
	fflush(stdin); //para limpara o buff do teclado
	printf("Nome completo: ");
	fgets(nome, 40, stdin); //para ler os espaços em branco
	
	//exibição
	printf("Idade: %d\n", idade);
	printf("Altura: %.2f\n", altura);
	printf("Primeira letra do nome: %c\n", letra);
	printf("Nome completo: %s \n", nome);
	
	system("pause");
	return 0;
}
