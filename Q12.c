#include <stdio.h>
#include <stdlib.h>

//Questão 12
int main(){
	float c1 = 100; //conta 1
	float c2 = 100; //conta 2
	float transf;
	
	//printa o saldo das contas
	printf("Saldo da conta 1 e %.2f\n", c1);
	printf("Saldo da conta 2 e %.2f\n", c2);
	
	printf("Digite o valor da transferencia da conta 1 para a conta 2: ");
	scanf("%f", &transf);
	
	if (transf <= c1){
		c1 = c1 - transf;
		c2 = c2 + transf;
		printf("Transferencia realizada com sucesso!!!\n");
	} else {
		printf("Erro ao realizar a transferencia, saldo insuficiente!.\n");
	}
	
	//printa o saldo das contas
	printf("Saldo da conta 1 e %.2f\n", c1);
	printf("Saldo da conta 2 e %.2f\n", c2);
	
	system("pause");
	return 0;
}
