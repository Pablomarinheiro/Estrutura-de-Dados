#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
	
	int vetor[5], n, i, achou = 0;
	vetor[0] = 10;
	vetor[1] = 20;
	vetor[2] = 30;
	vetor[3] = 40;
	vetor[4] = 50;
	
	printf("Digite um numero : ");
	scanf("%d", &n);
	
	for(i = 0; i <= 4; i++) {
		if(vetor[i] == n) {
			printf("Numero encontrado na posicao : %d", i);
			achou++;
			break;
		}
		if(vetor[i] > n) {
			break;
		}
	}
	if(achou == 0) {
		printf("Numero nao encontrado!!");
		system("pause");
	}
	
	
	
	return 0;
}
