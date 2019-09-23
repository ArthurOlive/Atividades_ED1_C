#include <stdio.h>
#include <stdlib.h>

//Questão 10
int main(){
	const float PI = 3.14;
	float raio; 
	float area;
	
	printf("Digite o raio: ");
	scanf("%f", &raio);
	
	
	if (raio > 0){
		area = PI * raio*raio;
		printf("A area e : %.2f \n", area);
	} else {
		printf("Raio invalido!!!\n");
	}
	
	system("pause");
	return 0;
}
