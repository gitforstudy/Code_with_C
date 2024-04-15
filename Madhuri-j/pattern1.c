//C program to print pattern
#include <stdio.h>
int main(void)
{
	int rows;
	printf("Enter positive integer for number of rows: ");//asking for number of rows
	scanf("%d", &rows);//reading input for number of rows
	
	// first loop to print all rows
    	for (int i = 0; i < rows; i++) {

        // inner loop 1 to print white spaces
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        // inner loop 2 to print star * character
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
