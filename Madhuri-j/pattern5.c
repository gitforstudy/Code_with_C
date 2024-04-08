#include <stdio.h> 
int main(void) 
{
	int rows;
       	printf("Enter any positive integer: ");
	scanf("%d", &rows);	

	// outer loop to iterator through each row 
	for (int i = 0; i < rows; i++) { 

		// inner loop to print * star in each row 
		for (int j = 0; j < rows; j++) { 
			// statement to check boundry condition 
			if (i > 0 && i < rows - 1 && j > 0 
				&& j < rows - 1) { 
				printf("  "); 
			} 
			else { 
				printf("* "); 
			} 
		} 
		printf("\n"); 
	} 
	return 0; 
}

