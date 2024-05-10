#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <n>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);
    if (n <= 0) {
        printf("Please provide a positive integer.\n");
        return 1;
    }

    int a = 0, b = 1, c = 0, i;

    printf("Fibonacci series first %d numbers:\n", n);
    printf("%d %d ", a, b);

    for (i = 2; i < n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    printf("\n");
    return 0;
}
