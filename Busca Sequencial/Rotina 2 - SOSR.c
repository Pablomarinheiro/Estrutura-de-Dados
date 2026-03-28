#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
	
	int vetor[5], i, n, achou = 0;
	
	vetor[0] = 30;
	vetor[1] = 10;
	vetor[2] = 50;
	vetor[3] = 40;
	vetor[4] = 20;
	
	printf("Digite um numero : ");
	scanf("%d", &n);
	
	for(i = 0; i <= 4; i++) {
		if(vetor[i] == n) {
			printf("Numero encontrado na posicao : %d", i);
			achou++;
			break;
		}
	}
	if(achou == 0) {
		printf("Valor nao encontrado!!");
	}
	return 0;
}
