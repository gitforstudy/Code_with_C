#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Invalid number of arguments");
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));

    return 0;
}

