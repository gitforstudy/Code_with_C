/* Pattern printing
        *               *
        * *           * *
        * * *       * * *
        * * * *   * * * *
        * * * * * * * * *
*/
#include <stdio.h>

int main() {
	int rows=5;

	for(int i=1;i<=rows;i++){ // Loop for rows
	for(int k=1;k<=i;k++){ // * for the current row
	    printf("* ");
	}
	for(int j=1;j<=2*(rows-i);j++){ //For printing space
	    printf(" ");
	}
	for (int k=1;k<=i;k++){ // * for the mirrored part
	    printf("* ");
	}
	printf("\n");
	}
	return 0;
}

