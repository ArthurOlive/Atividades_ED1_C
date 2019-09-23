#include <stdio.h>
#include <stdlib.h>

//Questão 05
int main(){
	int n[3];
	int sum = 0;
	int i;
	
	for (i = 1; i <= 3; i += 1){
		printf("Digite o numero %d: ", i);
		scanf("%d", &n[i]);
		sum += n[i];
	}
	
	printf("A media e : %.2f\n", (float) sum/ 3);
		
	system("pause");
	return 0;
}
