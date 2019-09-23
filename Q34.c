#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
	char nome[30];
	int idade;
	char sexo;
	float altura;
	float peso;
};

void printP(struct pessoa p){
	printf("Nome: %s\nIdade: %d\nSexo: %c\nAltura: %.2f\nPeso: %.2f\nIMC: %.2lf\n\n", p.nome, p.idade, p.sexo, p.altura, p.peso, (p.peso/ (p.altura*p.altura)));

}

int main(){
	struct pessoa * p; //ponteiro para o vetor dinamico
	int numP, i;
	
	printf("Digite a quantidade de pessoas que deseja armazenar: ");
	scanf("%d", &numP);
	
	p = (struct pessoa *) malloc(numP * sizeof(struct pessoa)); //Alocação de memoria dinamica
	
	for(i = 0; i < numP; i++){
		printf("Dados da pessoa %d: \n", i);
		printf("Digite o nome: ");
		fflush(stdin);
		fgets(p[i].nome, 30, stdin);
		printf("Digite o sexo: ");
		scanf("%c", &p[i].sexo);
		printf("Digite a altura: ");
		scanf("%f", &p[i].altura);
		printf("Digite o peso: ");
		scanf("%f", &p[i].peso);
		printf("\n");
	}
	
	printf("Dados das pessoas: ");
	for (i = 0; i < numP; i++){
		printP(p[i]);
	}
	
	free(p); //limpa a memoria
	
	system("pause");
	return 0;
}
