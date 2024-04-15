/*
* * * * *
 * * * *
 * * *
 * *
 * 
*/
#include<stdio.h>

int main() {
    int i, j, n = 5; 

    // Outer loop to control rows, starting from n and decreasing
    for(i = n; i >= 1; i--) {
        // Inner loop to control columns, printing '*' for each column
        for(j = 1; j <= i; j++) {
            printf(" * "); // Print '*' for each column
        }
        printf("\n"); // Move to the next row after printing each row of '*'
    }

    return 0;
}

