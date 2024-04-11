#include <stdio.h>

// Function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

// Function to calculate binomial coefficient
unsigned long long binomialCoefficient(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
    int n, i, j;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("%llu ", binomialCoefficient(i, j));
        }
        printf("\n");
    }

    return 0;
}

