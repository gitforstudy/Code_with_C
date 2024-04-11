/* WAP to count the number of digits*/
#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    int org_num = n; // Store the original number

   
    if (n < 0) {
        n = -n; // Convert negative number to positive
    }

    // Counting digits
    while (n != 0) {
        n /= 10; // Remove the last digit
        count++; // Increment count for each digit
    }

   
    printf("%d  number of digits: %d\n", org_num, count);

    return 0;
}

