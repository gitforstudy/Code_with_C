//program for left inverted triangle

#include <stdio.h>
void main(void) {
	
	int rows = 5;
	for(int i = 0; i < rows; i++) {
		for (int j = 0; j <= i; j++){
			printf("*");
		}
	printf("\n");
	/* for(int i = 0; i <= rows; i++) {  // 2nd pattern program
	 	for(int j = 0; j <= i; j++) {
			if (j != rows) {
				printf("*");
			}
		}
		for (int k = 9 -(2 * i); k >= 1; k--){
			printf(" ");
		}
		for (int m = 0; m <= i; m++){
			printf("*");
		}
		printf("\n");
	   }
}*/
// program for right inverted triangle

	/*for (int i = 0; i < rows; i++) {
	 	for(int j = 0; j < 2 * (rows - i) - 1; j++) {
			printf(" ");
		}
		for(int k = 0; k <= i; k++) {
			printf("*");
		}
	 * }
}

//program for full pyramid
/*
 #include <stdio.h>
 int main(){
 	int rows = 5; 
  
    // first loop to print all rows 
	for (int i = 0; i < rows; i++) { 
  
        // inner loop 1 to print white spaces 
        for (int j = 0; j < 2 * (rows - i) - 1; j++) { 
            printf(" "); 
        } 
  
        //to print star numbers 
        for (int k = 0; k < 2 * i + 1; k++) { 
            printf("*"); 
        } 
        printf("\n"); 
    } 
    return 0; 
}
 */

//
