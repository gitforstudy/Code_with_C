#include <stdio.h>
void main(void) {
	
	int rows = 5;
	for(int i = 0; i < rows; i++) {
		for (int j = 0; j <= i; j++){
			printf("*");
		}
	printf("\n");
	}
	/*for (int i = 0; i < rows; i++) {
	 	for(int j = 0; j < 2 * (rows - i) - 1; j++) {
			printf(" ");
		}
		for(int k = 0; k <= i; k++) {
			printf("*");
		}
	 * }
}
