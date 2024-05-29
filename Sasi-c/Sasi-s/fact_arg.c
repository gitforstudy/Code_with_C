#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Invalid number of arguments");
        return 1;
    }

    int num = atoi(argv[1]);
    printf("Factorial of %d: %d\n", num, factorial(num));

    return 0;
}

