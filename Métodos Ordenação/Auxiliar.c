#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int vetor[5] = {30, 20, 50, 40, 10}, 
	i, j, temp;
	
	for(i = 0; i <= 4; i++) {
		for(j = 0; j < 4; j++) {
			if(vetor[j] > vetor[j + 1]) {
				temp = vetor[j];
				vetor[j] = vetor[j + 1];
				vetor[j + 1] = temp;
			}
		}
	}
	
	for(i = 0; i <= 4; i++) {
		printf("%d |", vetor[i]);
	}
	return 0;
}
