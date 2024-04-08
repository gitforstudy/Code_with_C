#include <stdio.h> 
int main(void) 
{ 
	int rows = 5; 

	// first loop for printing rows 
	for (int i = 0; i <=5; i++) { 

		// second loop for printing character in each rows 
		for (int j = 0; j <= i; j++) { 
		    
		    if(j!=5)
			printf("*"); 
		} 

		// loop for printing * character 
		for (int k =9-(2*i); k >=1; k--) { 
			printf(" "); 
		}
		for(int l=0;l<=i;l++)
		   printf("*");
		printf("\n"); 
	} 
	return 0; 
}
