#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
	
	int vetor[5], n, i, valor = 0;
	vetor[0] = 30;
	vetor[1] = 10;
	vetor[2] = 50;
	vetor[3] = 30;
	vetor[4] = 20;
	
	printf("Digite um numero : ");
	scanf("%d", &n);
	
	for(i = 0;i <= 4; i++) {
		if(n == vetor[i]) {
			printf("\nSeu numero %d foi encontrado na posicao : %d", n, i);
			valor++;
		}
	}
	if(valor == 0) {
		printf("Valor nao encontrado!!\n");
	}	
	return 0;
}
