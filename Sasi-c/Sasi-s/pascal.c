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

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <rows>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%llu ", binomialCoefficient(i, j));
        }
        printf("\n");
    }

    return 0;
}

