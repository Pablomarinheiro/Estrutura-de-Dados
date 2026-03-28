#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
	
	int vetor[10] = {10,20,30,40,50,60,70,80,90,100}, 
	n, start = 0, end = 9, mid;
	
	printf("Enter a number : ");
	scanf("%d", &n);
	
	while(start <= end) {
		mid = (start + end) / 2;
		
		if(vetor[mid] == n) {
			printf("Value found in position : %d", mid);
			break;
		}
		else if (vetor[mid] < n) {
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}
	if(start > end) {
		printf("Value not found!");
	}
	
	return 0;
}
