#include <stdio.h>
#include <stdlib.h>

int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Invalid number of arguments");
        return 1;
    }

    int num = atoi(argv[1]);
    printf("Sum of digits of %d: %d\n", num, sumOfDigits(num));

    return 0;
}

