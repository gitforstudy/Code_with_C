/*using while ,do while and for loops :
 *
 * *
 * * *
 * * * *
 * * * * * */


#include<stdio.h>

int main() {
    int i, j, n = 5; // Declare variables for loop control and number of rows

    // Outer loop to control rows
    for(i = 1; i <= n; i++) {
        // Inner loop to control columns
        for(j = 1; j <= i; j++) {
            printf(" * "); 
        }
        printf("\n"); 
    }

    return 0;
}

