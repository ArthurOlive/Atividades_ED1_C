#include <stdio.h>
#include <stdlib.h>

//Questão 14
int main(){
	float n[3]; //notas
	float med;
	float sum;
	float rec;
	int i = 1;
	
	while (i <= 3){
		printf("Digite a nota %d : ", i);
		scanf ("%f", &n[i]);
		if (n[i] >= 0 && n[i] <= 10){
			sum += n[i];
			i++;
		} else {
			printf("Nota invalida!!!\n");
		}
	}
	
	
	med = sum / 3; //media aritmetrica
	
	if (med >= 7 ){
		printf("Aluno aprovado!\nMedia final : %.2f\n", med );
	} else if (med >= 3.5){
		printf("Aluno em recuperacao.\n");
		printf("Digite a nota da recuperacao: ");
		scanf("%f", &rec);
		
		med = (med * 6 + rec * 4)/ 10;
		
		if (med >= 5){
			printf("Aluno aprovado!\nMedia final : %.2f\n", med );
		} else {
			printf("Aluno reprovado!\nMedia final : %.2f\n", med );
		}
	} else {
		printf("Aluno reprovado direto!!!\nMedia final : %.2f\n", med);
	}
	
	system("pause");
	return 0;
}
