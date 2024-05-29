#include <stdio.h>
#include <stdlib.h>

int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Invalid number of arguments");
        return 1;
    }

    int num = atoi(argv[1]);
    printf("Number of digits in %d: %d\n", num, countDigits(num));

    return 0;
}

