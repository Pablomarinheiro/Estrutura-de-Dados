#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int vetor[5] = {30, 20, 50, 40, 10},
	i, j, menor, posMenor, eleito;
	
	for(i = 0; i <= 4; i++) {
		printf("%d |", vetor[i]);
	}
	for(i = 0; i < 4; i++) {
		eleito = vetor[i];
		menor = vetor[i+1];
		
		for(j = i + 1; j <= 4; j++) {
			if(vetor[j] < menor) {
				menor = vetor[j];	
				posMenor = j;			
			}
		}
		if(menor < eleito) {
			vetor[i] = menor;
			vetor[posMenor] = eleito;
		}
	}
	printf("\nNovo Ordem\n");
	for(i = 0; i <= 4; i++) {
		printf("%d |", vetor[i]);
	}
	return 0;	
}
