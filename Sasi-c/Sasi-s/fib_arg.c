#include <stdio.h>
#include <stdlib.h>

void fibonacci(int n) {
    int first = 0, second = 1, next;
    printf("First %d Fibonacci numbers: ", n);

    for (int i = 0; i < n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Invalid number of arguments");
        return 1;
    }

    int n = atoi(argv[1]);
    fibonacci(n);

    return 0;
}

