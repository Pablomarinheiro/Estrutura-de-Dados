#include <stdio.h>
#include <stdlib.h>

int main() {
	int stack[5] = {0,0,0,0,0}, i, top = -1, option;
	char output, validation;
	
	printf("\n------------------------------------------");
	printf("\nEnter a letter : ");
	scanf(" %c", &output);
	
	do{
		switch(output){
			case 'I':
			case 'i':
				if(top == 4) {
					printf("Full");
				}
				else{
					printf("Enter a number : ");
					scanf("%d", &option);
					top++;
					stack[top] = option;
				}
			break;
			case 'S':
			case 's':
				break;
//			default: printf("Error!! - Try again");
		}
		for(i = 4; i >= 0;i--) {
			printf("\nPosition : %d - %d"), i, stack[i];
		}
	}while(output != 'S' && output !='s');
	return 0;	
}
