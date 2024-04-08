#include <stdio.h> 
int main() 
{ 
	int rows = 5; 

	// first loop for printing rows 
	for (int i = 0; i < rows; i++) { 

		// second loop for printing number in each rows 
		for (int j = 0; j <= i; j++) { 
			printf("%d ", j + 1); 
		} 
		printf("\n"); 
	} 
	
}
