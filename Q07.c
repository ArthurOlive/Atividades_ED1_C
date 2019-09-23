#include <stdio.h>
#include <stdlib.h>

//Questão 05
int main(){
	const float refri = 1.50;
	const float fatia = 3.00;
	const float taxa = 0.1;
	
	int qtdRefri;
	int qtdFatia;
	int qtdPesso;
	float preco;
	
	printf("Digite o numero de refigerantes: ");
	scanf("%d", &qtdRefri);
	printf("Digite o numero de fatias: ");
	scanf("%d", &qtdFatia);
	printf("Digite o numero de pessoas: ");
	scanf("%d", &qtdPesso);
	
	preco = qtdRefri * refri + qtdFatia * fatia;
	
	printf("Preco sem taxa: %.2f $\n", preco);
	printf("Preco com taxa: %.2f $\n", preco + preco * taxa);
	
	if (qtdPesso != 0){
		printf("Preco por pessoa: %.2f $\n", preco/qtdPesso);
	} else {
		printf("Numero de pessoas invalido!!! \n");
	}
		
	system("pause");
	return 0;
}
