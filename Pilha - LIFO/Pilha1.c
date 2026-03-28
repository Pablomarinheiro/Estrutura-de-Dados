
#include <stdio.h>
#include <stdlib.h>

int main() {
	int stack[5] = {0,0,0,0,0}, i, top = -1;
	char output, validation;
	
	do{
		printf("\n-------------------------------\nI - Insert\nD - Delete\nC - Consult\nS - Sair");
		printf("\nEnter a letter : ");
		scanf(" %c", &output);
		switch (output) {
			case 'I':
			case 'i':
				if(top == 4){
					printf("\nThe stack is full!");
				}
				else{
					top++;
					printf("\nEnter a number : ");
					scanf(" %d", &stack[top]);
					printf("\nInsert succes");
				}
				break;
			case 'D':
			case 'd':
				if(top == -1){
					printf("\nThe stack empty!");
					break;
				}
				else{
					printf("\nDo you ant to delete : ");
					scanf(" %c", &validation);
					if(validation == 's' || validation=='S'){	
						
						top--;
						printf("\nDelete succes");
						break;
					}
					else if(validation == 'n' || validation=='N') {
					break;
					}
				}
				break;
			case 'C': 
			case 'c':
				printf("\nStack");
				if(top == -1){
					printf("\nThe stack empty!");
					break;
				}
				for(i = top; i >= 0; i--) {
					printf("\nPosition %d - value %d", i, stack[i]);
				}
				printf("\nConsult succes"); 
				break;
			case 'S':
			case 's':
				break;
			default : printf("\nError! - Try Again");
		}
	}
	while(output != 'S' && output != 's');
	printf("\nStack");
	for(i = top; i >= 0; i--) {
		printf("\nPosition %d - value %d", i, stack[i]);
	}
	return 0;	
}
