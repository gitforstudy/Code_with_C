#include <stdio.h>

int main(void)
{
	int rows;
	printf("Enter any positive integer for number of rows: ");
	scanf("%d", &rows);

    	// first loop for printing rows
    	for (int i = 0; i < rows; i++) {

        // second loop for printing character in each rows
        for (int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
