#include <stdio.h>
#include <stdbool.h>
bool isPalindrome(int num) 
{
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) 
    {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num)) 
    {
        printf("%d is a palindrome.\n", num);
    } else 
    {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}
