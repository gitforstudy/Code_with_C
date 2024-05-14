//C program for bits addition and subtraction
#include <stdio.h>

void to_add(int num1, int num2);
void to_sub(int num1, int num2);

void to_bin(int num1, int num2)
{
    int i, j;
    for(i = 3; i >= 0; i--) {
        printf("%d", num1>>i&1);
    }
    printf("\n");
    for(j = 3; j >= 0; j--) {
        printf("%d", num2>>j&1);
    }
    printf("\n----\n");
}

void to_add(int num1, int num2)
{
    int borrow;
    while(num2 != 0) {
        borrow = num1 & num2;
        num1 = num1 ^ num2;
        num2 = borrow << 1;
    }
    for(int i = 3; i >= 0; i--) {
        printf("%d", num1>>i&1);
    }
    printf("\n----\n");
    //to_bin(num1, 0);
}

void to_sub(int num1, int num2)
{
    int borrow;
    while(num2 != 0) {
        borrow = (~num1) & num2;
        num1 = num1 ^ num2;
        num2 = borrow << 1;
    }
    for(int i = 3; i >= 0; i--) {
        printf("%d", num1>>i&1);
    }
    printf("\n----\n");
    //to_bin(num1, 0);
}

int main(void) 
{
    unsigned int num1, num2;
    printf("Enter two positive integers: ");
    scanf("%x %x", &num1, &num2);
    to_bin(num1, num2);
    to_add(num1, num2);
    to_sub(num1, num2);
    return 0;
}
