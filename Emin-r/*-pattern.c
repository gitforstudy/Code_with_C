/*
 WAP to print patterns in c
    
        *
        * *
        * * *
        * * * *
        * * * * *
*/
#include <stdio.h>

int main() {
	int rows = 5;
	// Loop for each row
	for (int i = 1; i <= rows; i++) {
	// Print spaces for the pyramid shape
	for (int j = 1; j < i; j++) {
		printf(" ");
	}
	// Print '*' for the current row
	for (int k = 1; k <= i; k++) {
		printf("* ");
	}
	printf("\n");
	}
	return 0;
}

