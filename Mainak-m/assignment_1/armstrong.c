#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int isArmstrong(int number) {
    int numDigits = 0;
    int originalNumber = number;
    int result = 0;

    // Count the number of digits
    while (originalNumber != 0) {
        originalNumber /= 10;
        numDigits++;
    }

    originalNumber = number;

    // Calculate the Armstrong sum
    while (originalNumber != 0) {
        int remainder = originalNumber % 10;
        result += pow(remainder, numDigits);
        originalNumber /= 10;
    }

    return result == number;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }

    int number = atoi(argv[1]);

    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}

