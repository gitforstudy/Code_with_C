//C program to find if the bit is even or odd
#include <stdio.h>

void to_bin(int num)
{
    int i;
    for(i = 15; i >= 0; i--) {
        printf("%d", num>>i&1);
    }
    printf("\n");
}

void check_even_odd(int num) 
{
    if(num & 1) {
        printf("odd\n");
    } else {
        printf("even\n");
    }
}
int main(void)
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    to_bin(num);
    check_even_odd(num);
}
