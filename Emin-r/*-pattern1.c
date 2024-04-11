/*
        *               *
        * *           * *
        * * *       * * *
        * * * *   * * * *
        * * * * * * * * *
*/
#include <stdio.h>

int main() {
    int rows = 5;
    // Loop for each row
    for (int i = 1; i <= rows; i++) {
        // Print '*' for the current row
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        // Print spaces for the pyramid shape
        for (int j = 1; j <= 2 * (rows - i); j++) {
            printf(" ");
        }
        // Print '*' for the mirrored part
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

