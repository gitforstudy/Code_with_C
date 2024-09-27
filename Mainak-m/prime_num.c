#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }

    int num = atoi(argv[1]);
    if (num <= 1) {
        printf("Please enter a number greater than 1.\n");
        return 1;
    }

    int i;
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            printf("Not a prime number\n");
            return 0;
        }
    }

    printf("Prime number\n");
    return 0;
}
