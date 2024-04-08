#include <stdio.h>
int main(void)
{
	int rows;
	printf("Enter any positive integer for number of stages: ");
	scanf("%d", &rows);

    	// first loop to print all rows
    	for (int i = 0; i < rows; i++) {

        	// first inner loop for printing white spaces
        	for (int j = 0; j < 2 * i; j++) {
            	printf(" ");
        	}

		for(int k = 0; k < rows - i; k++) {
			printf("* ");
		}
		printf("\n");
    	}
	return 0;
}
