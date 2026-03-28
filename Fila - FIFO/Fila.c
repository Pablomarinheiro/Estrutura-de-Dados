#include <stdio.h>
#include <stdlib.h>

int main() {
	int fifo[5] = {0, 0, 0, 0, 0},
	i, amount = -1, number;
	char letter, response;
	
	do{
		printf("\n------------------------------");
		printf("\nI - insert");
		printf("\nC - consult");
		printf("\nE - exit");
		printf("\nEnter a letter : ");
		scanf(" %c", &letter);
	
		switch(letter){
			case 'I':
			case 'i':
				if(amount >= 4){
					printf("\nThe line is full");
				}
				else{
					printf("\nEnter a number : ");
					scanf(" %d", &number);
					amount++;
					fifo[amount] = number;
				}
				break;
			case 'D':
			case 'd':
				if(amount == -1){
					printf("\nThe line is empty");
				}
				else {
					i = 0;
					printf("\nDo you want delete to number %d in position %d", fifo[i], i);
					printf("\n(y/n) : ");
					scanf(" %c", &response);
					if(amount == 'y' || amount == 'Y'){
						for(i = 0; i < amount; i++){
							fifo[i] = fifo[i + 1];
						}
					}
					amount--;
				}
				break;
			case 'C':
			case 'c':
				if(amount == -1){
					printf("\nThe line is empty");
				}
				else{
					printf("\nThe Line\n");
					for(i = 0; i <= amount;i++) {
						printf("[%d] - %d\n", i, fifo[i]);
					}
				}
				break;
			case 'E':
			case 'e':
				printf("\nThe Line\n");
				break;
			default:
				printf("\nError, try again");
		}
	}while(letter != 'e' && letter != 'E');
	
	for(i = 0; i <= amount; i++){
		printf("[%d] - %d\n", i, fifo[i]);
	}
	return 0;
}
