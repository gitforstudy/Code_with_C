//C program to convert digits to words

#include <stdio.h>

int main(void)
{
    int num, rem = 0, rev;
    printf("Enter the number: ");
    scanf("%d", &num);
    while(num > 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    while (rev > 0) {
        int rem = rev % 10;
        switch(rem) {
            case 1: printf("One ");
                    break;
            case 2: printf("Two ");
                    break;
            case 3: printf("Three ");
                    break;
            case 4: printf("Four ");
                    break;
            case 5: printf("Five ");
                    break;
            case 6: printf("Six ");
                    break;
            case 7: printf("Seven ");
                    break;
            case 8: printf("Eight ");
                    break;
            case 9: printf("nine ");
                    break;
            default: printf("invalid\n");
        }
        rev = rev / 10;
    }
    return 0;
}
