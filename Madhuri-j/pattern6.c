//C program to print pattern
#include <stdio.h> 
int main(void) 
{ 
	int rows;
       	printf("Enter any positive integer: ");//asking the user to give some positive integer for number of rows
	scanf("%d", &rows);//reading the input from the user	

	// first loop for printing rows 
	for (int i = 0; i <= rows; i++) { 

		// second loop for printing character in each rows 
		for (int j = 0; j <= i; j++) { 
		    
		    if(j!=rows)
			printf("*"); 
		} 

		// loop for printing space character 
		for (int k =9-(2*i); k >=1; k--) { 
			printf(" "); 
		}

		//loop for printing * character
		for(int l=0;l<=i;l++)
		   printf("*");
		printf("\n"); 
	} 
	return 0; 
}
