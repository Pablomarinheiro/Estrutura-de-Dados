#include <stdio.h>
#include <stdlib.h>

int main() {
	int vetor[5] = {30,20,50,40,10},
	i, temp;
	printf("Desordenados : ");
	for(i = 0; i <= 4; i++) {
		printf(" %d |", vetor[i]);
	}
	for(i = 0; i < 4; i++) {
		if(vetor[i] < vetor[i + 1]) {
			temp = vetor[i];
			vetor[i] = vetor[i + 1];
			vetor[i + 1] = temp;
		}
	}
	
	printf("\nOrdenados : ");
	for(i = 0; i <= 4; i++) {
		printf(" %d |", vetor[i]);
	}
	return 0;
}
