#include <stdio.h>

int main() {
    int i, n, firstTerm = 0, secondTerm = 1, sum;

    printf("Enter the number of terms required in the Fibonacci Series: ");
    scanf("%d", &n);

    // Display the first two terms of the Fibonacci Series
    printf("\nFibonacci Series is:\n\n%d %d", firstTerm, secondTerm);

    // Start the loop from the third term (i = 2)
    for (i = 2; i < n; ++i) {
        sum = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = sum;
        printf(" %d", sum);
    }

}

