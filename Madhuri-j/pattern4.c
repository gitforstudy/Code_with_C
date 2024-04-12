//C program to print pattern
#include <stdio.h>
int main(void)
{
	int n;
	printf("Enter any positive integer: ");//asking the user to print the positive number
	scanf("%d", &n);//reading the input from the user

    	// first outer loop to iterate through each row
    	for (int i = 0; i < 2 * n - 1; i++) {

        // assigning values to the comparator according to
        // the row number
        int comp;
        if (i < n) {
            comp = 2 * (n - i) - 1;
        }
        else {
            comp = 2 * (i - n + 1) + 1;
        }

        // first inner loop to print leading whitespaces
        for (int j = 0; j < comp; j++) {
            printf(" ");
        }

        // second inner loop to print stars *
        for (int k = 0; k < 2 * n - comp; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
