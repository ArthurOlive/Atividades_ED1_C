#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int printMenu(){
	printf("\n===============================\n");
	printf(" 1 - potenciacao\n");
	printf(" 2 - raiz quadrada\n");
	printf(" 3 - fatorial\n");
	printf(" 0 - sair\n");
	printf("===============================\n");
}

void pot(){
	double num; 
	int exp;
	double result;
	
	printf("Digite o numero da base: ");
	scanf("%lf", &num);
	printf("Digite o expoente: ");
	scanf("%d", &exp);
	
	result = pow(num, exp); //num ^ exp;
	
	printf("O resultado e : %.2lf \n", result);
}

void raiz(){
	double num; 
	double result;
	
	printf("Digite o numero: ");
	scanf("%lf", &num);
	
	result = sqrt(num);
	
	printf("O resultado e : %.2lf \n", result);
}

void fat(){
	double num; 
	double result = 1;
	
	printf("Digite o numero: ");
	scanf("%lf", &num);
	

	
	while (num > 0){]
		result *= num;
		num --; 
	}
	
	printf("O resultado e : %.0lf \n", result);
}

int main(){
	int n; 
	do{
		printMenu();
		printf("Escolha: ");
		scanf("%d", &n); //ler o valor de n
		
		switch(n){
			case 1:
				pot();
				break;
			case 2:
				raiz();
				break;
			case 3:
				fat();
				break;
			case 0:
				printf("Ate breve\n");
				break;
			default:
				printf("Por favor digite uma opcao valida\n");
				break;
		}
	} while(n != 0);
	
	system("pause");
	return 0;
}
