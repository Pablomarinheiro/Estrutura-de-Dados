//If a < b, vector[c] receives a, otherwise it receives b. 
//Remember to validate a and b if they overflow.

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int vetorA[5] = {5,15,25,35,45},
	vetorB[5] = {10,20,30,40,50},
	vetorC[10],
	a = 0, b = 0, c;
	
	for(c = 0; c <= 9; c++) {
		if(a >= 5) {
			vetorC[c] = vetorB[b];
			b++;
		}
		else if(b >= 5) {
			vetorC[c] = vetorA[a];
			a++;
		}
		else if(vetorA[a] < vetorB[b]) {
			vetorC[c] = vetorA[a];
			a++;
		}
		else{
			vetorC[c] = vetorB[b];
			b++;
		}
	}
	for(c = 0; c <= 9; c++) {
		printf("\nPosition %d | Value %d", c, vetorC[c]);
	}
	return 0;
}
