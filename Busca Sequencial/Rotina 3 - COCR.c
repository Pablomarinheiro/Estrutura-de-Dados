#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
	
	int vetor[5], n, i, achou = 0;
	vetor[0] = 10;
	vetor[1] = 20;
	vetor[2] = 20;
	vetor[3] = 30;
	vetor[4] = 40;
	
	printf("Digite um numero : ");
	scanf("%d", &n);
	
	for(i = 0; i <=4; i++) {
		if(vetor[i] == n) {
			printf("\nNumero encontrado na posicao : %d", i);
			achou++;
		}
		if(vetor[i] > n){
			break;
		}
	}
	if(achou == 0) {
		printf("Numero nap encontrado!!");
	}
	if(achou == 1 and achou =! 0){		
		printf("Valor foi encontrado %d vez", achou);
	}
	else{
		printf("Valor foi encontrado %d vezes", achou);
	}
	return 0;
}
