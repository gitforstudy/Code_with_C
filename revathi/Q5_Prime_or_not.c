/* Write a program to check whether the given  is a prime number or not.*/
#include <stdio.h>

int main() {
    int i = 2;     // Initialize the divisor to 2
    int p, c = 0;  // p is the number to be checked, c is the count of factors

   
    printf("Enter a value: ");
    scanf("%d", &p);

    while (i <= p / 2) // Check divisibility of the number by integers from 2 to (p/2)

    {
        if (p % i == 0) // If p is divisible by i, increment the count of factors
	{
            c++;
        }
        i++;
    }

    if (c == 0) // If the count of factors is zero, then the number is prime
    {
        printf("Prime number\n");
    } else {
        printf("Not a prime number\n");
    }

    return 0;
}

