#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	int vetor[5] = {20,30,40,50,10},
	i, j, temp;
	bool replace;
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			if(vetor[j] > vetor[j + 1]) {
				temp = vetor[j];
				vetor[j] = vetor[j + 1];
				vetor[j + 1] = temp;
				replace = true;
			}
		}
		if(replace = false){
			break;
		}
	}
	for(i = 0; i <= 4; i++) {
		printf(" %d |", vetor[i]);
	}
	return 0;
}
