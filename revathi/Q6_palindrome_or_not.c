/*WAP to check whether the given number is palindrom or not.*/
#include <stdio.h>

int main() {
    int num, r_Num = 0, original_Num, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original_Num = num;

    while (num != 0) // Reverse the number
    {
        remainder = num % 10;
        r_Num = r_Num * 10 + remainder;
        num /= 10;
    }

    if (original_Num == r_Num) // Check if the original number is equal to its reverse
    {
        printf("%d is a palindrome.\n", original_Num);
    } else 
    {
        printf("%d is not a palindrome.\n", original_Num);
    }

    return 0;
}

