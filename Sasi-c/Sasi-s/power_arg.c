#include <stdio.h>
#include <stdlib.h>

double power(double base, int exponent) {
    double result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Invalid number of arguments");
        return 1;
    }

    double base = atof(argv[1]);
    int exponent = atoi(argv[2]);
    printf("%lf raised to the power of %d is %lf\n", base, exponent, power(base, exponent));

    return 0;
}

