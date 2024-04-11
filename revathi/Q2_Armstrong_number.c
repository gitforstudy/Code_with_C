//WAP to check given number is Armstrong no.*/
#include <stdio.h>

// Function to calculate the power of a number
int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int num, original_num, c = 0, digit, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    original_num = num; // Store the original number

    
    int temp_num = num;
    while (temp_num != 0) // Calculate the number of digits in the number
    {
        temp_num /= 10; // Divide the number by 10 to remove the last digit
        c++;            // Increment the count of digits
    }

    printf("Total number of digits: %d\n", c);

    num = original_num;// Reset num to the original number for further processing


    // Calculate the sum of digits raised to the power of the total number of digits
    while (num > 0) {
        digit = num % 10;            // Take  the last digit
        sum += power(digit, c);      // Add the digit raised to the power of c to the sum
        num /= 10;                   // Remove the last digit
    }

    // Check if the number is an Armstrong number
    if (original_num == sum) {
        printf("Armstrong number\n");
    } else {
        printf("Not an Armstrong number\n");
    }

    return 0;
}

