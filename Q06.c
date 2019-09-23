#include <stdio.h>
#include <stdlib.h>

//Questão 06
int main(){
	float n[3];
	float sum = 0;
	int i;
	
	for (i = 1; i <= 3; i += 1){
		printf("Digite o numero %d: ", i);
		scanf("%f", &n[i]);
		sum += n[i];
	}
	
	printf("A media e : %.2f\n", sum/ 3);
		
	system("pause");
	return 0;
}
