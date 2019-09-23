#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

struct produto{
	char nome [20];
	float valor;	
};

int menu(){
	int esc;
	printf("Opções:\n")
	printf("\n=============================\n");
	printf("1 - Inserir produtos\n");
	printf("2 - Mostrar protutos\n");
	printf("0 - Sair");
	printf("\n=============================\n");
	printf("Escolha: ");
	scanf("%d", &esc);
	return esc;
}

int inserir(){
	struct produto p;
	FILE * arq;
	
	fflush(stdin);
	printf("Digite o nome do produto: ");
	scanf("%s", &p.nome);
	printf("Digite o valor do produto: ");
	scanf("%f", &p.valor);
	
	arq = fopen("Arq01.csv", "a");//Escrever no final do arquivo
	
	if (arq == NULL){
		printf("O Arquivo nao pode ser aberto");
		return 1;
	}

	fprintf(arq, "%s\t", p.nome);
	fprintf(arq, "%f\n", p.valor);
	
	fclose(arq);
	return 0;
}

int listar(){
	struct produto p;
	FILE * arq;
	
	arq = fopen("Arq01.csv", "r");//Abre o arquivo para leitura
	
	if (arq == NULL){
		printf("O Arquivo nao pode ser aberto");
		return 1;
	}
	
	printf("\n==================================\n");
	printf("Lista de produtos: \n");
	while(fscanf(arq, "%s\t%f\n", &p.nome, &p.valor) != EOF){
		printf("produto:%s valor:%f \n", p.nome, p.valor);
	}
	printf("\n==================================\n");

	fclose(arq);
	return 0;
}

int main(){
	int esc;
	while(esc = menu()){
		switch(esc){
			case 1:
				if (!inserir()){
					printf("Produto inserido com sucesso!\n");
				} else {
					printf("Falha ao inserir um produto!\n");
				}
				break;
			case 2:
				if (!listar()){
					printf("Operação realizada com sucesso!\n");
				}else {
					printf("Erro ao listar os produto!\n");
				}
				break;
			default:
				printf("Por favor digite uma opção valida!\n");
				break;
		}	
	}
	
	system("pause");
	return 0;
}
