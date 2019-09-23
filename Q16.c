#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Questao 16

int delta(int a, int b, int c){
	return pow(b, 2) - (4 * a * c);
}

void raiz(int a, int b, int delta){
	float x1, x2;
	//se o delta for negativo os pontos das raizes são complexos
	if (delta > 0){
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("As raizes da equacao de 2 grao sao:\nX1 = %.2f\nX2 = %.2f\n", x1, x2);

	} else {
		printf("Raiz do delta negativa, os pontos da raiz sao numeros complexos.\n");
	}
	
}

int main(){
	int a, b, c;
	
	printf("Digite o valor de a, b e c da seguinte equação de segundo grau:\nax^2+bx+c = 0\na: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);
	printf("c: ");
	scanf("%d", &c);
	
	raiz(a, b, delta(a, b, c));
	
	system("pause");
	return 0;
}
