#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Invalid number of arguments");
        return 1;
    }

    int n = atoi(argv[1]);
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += 2 * i;
    }
    printf("Sum of first %d even numbers: %d\n", n, sum);

    return 0;
}

