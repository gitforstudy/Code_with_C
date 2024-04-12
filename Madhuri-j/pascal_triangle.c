//C program to print the pascal triangle
#include <stdio.h> 
void printPascal(int n) //function for pascal triangle
{ 
	for (int line = 1; line <= n; line++) { //loop for determining the number of lines
		for (int space = 1; space <= n - line; space++) //loop for giving number of spaces
			printf(" "); 
		// used to represent C(line, i) 
		int coef = 1; 
		for (int i = 1; i <= line; i++) { 
			// The first value in a line 
			// is always 1 
			printf("%4d", coef); 
			coef = coef * (line - i) / i; 
		} 
		printf("\n"); 
	} 
} 
 
int main(void) 
{ 
	int n;
       	printf("Enter any positive integer: ");//asking the user to give some positive integer
	scanf("%d", &n);//reading the input from the user
	printPascal(n); //function call for pascal triangle
	return 0; 
}

