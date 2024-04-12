//C program to print pattern
#include <stdio.h>
int main(void)
{
	int rows;
	printf("Enter any positive integer for number of stages: ");//asking the user how many number of stages
	scanf("%d", &rows);//reading the number of rows

    	// first loop to print all rows
    	for (int i = 0; i < rows; i++) {

        	// first inner loop for printing white spaces
        	for (int j = 0; j < 2 * i; j++) {
            	printf(" ");
        	}
		
		//loop for printing the * values
		for(int k = 0; k < rows - i; k++) {
			printf("* ");
		}
		printf("\n");
    	}
	return 0;
}
