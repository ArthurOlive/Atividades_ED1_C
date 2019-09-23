#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

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
	struct pessoa p1, p2, p3;
	
	strcpy(p1.nome, "Jose");
	p1.idade = 30;
	p1.sexo = 'm';
	p1.altura = 1.7;
	p1.peso = 82;
	
	
	strcpy(p2.nome, "Maria");
	p2.idade = 17;
	p2.sexo = 'f';
	p2.altura = 1.5;
	p2.peso = 52;
	
	
	strcpy(p3.nome, "Ana");
	p3.idade = 24;
	p3.sexo = 'f';
	p3.altura = 1.6;
	p3.peso = 61;
	
	printP(p1);
	printP(p2);
	printP(p3);	
	
	system("pause");
	return 0;
}
