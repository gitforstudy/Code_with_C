#include <stdio.h>
#include <stdlib.h>

int isPalindrome(int num) {
    int reversedNum = 0, originalNum = num;
    while (num != 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }
    return originalNum == reversedNum;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Invalid number of arguments");
        return 1;
    }

    int num = atoi(argv[1]);

    if (isPalindrome(num))
        printf("%d is a palindrome number.\n", num);
    else
        printf("%d is not a palindrome number.\n", num);

    return 0;
}

