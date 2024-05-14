//C program to swap numbers using bitwise

#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Before swap: %d %d\n", num1, num2);
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    printf("After swap: %d %d\n", num1, num2);
    return 0;
}
