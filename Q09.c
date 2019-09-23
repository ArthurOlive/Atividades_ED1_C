#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Questão 09
int main(){
	float altura;
	float peso;
	float IMC;
	
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	printf("Digite o seu peso: ");
	scanf("%f", &peso);
	
	IMC = peso / pow(altura, 2);
	
	
	printf("O seu IMC e : %.3f \n", IMC);
	
	system("pause");
	return 0;
}
