/*
Program to print patterns in c
    
        *
        * *
        * * *
        * * * *
        * * * * *
*/
#include <stdio.h>

int main() {
	int rows=5;
	
	for(int i=1;i<=rows;i++){ // Rows
	for(int j=1;j<i;j++){ // Print spaces
		printf(" ");
	}
	for(int k=1;k<=i;k++){ //Print * for the current row
		printf("* ");
	}
	printf("\n");
	}
	return 0;
}

