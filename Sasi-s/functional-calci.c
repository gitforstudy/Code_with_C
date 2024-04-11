#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Invalid number of arguments");
        return 1;
    }

    float operand1 = atof(argv[1]);
    char operator = argv[2][0];
    float operand2 = atof(argv[3]);
    float result;

    switch (operator) {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            if (operand2 == 0) {
                printf("Error: Division by zero!\n");
                return 1;
            }
            result = operand1 / operand2;
            break;
        default:
            printf("Invalid operator\n");
            return 1;
    }

    printf("%.2f %c %.2f = %.2f\n", operand1, operator, operand2, result);

    return 0;
}

