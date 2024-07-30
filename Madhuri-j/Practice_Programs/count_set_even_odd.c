//C program to count number of set bits in even and odd positions
#include <stdio.h>

void to_bin(int num)
{
    int i;
    for(i = 7; i >= 0; i--) {
        printf("%d", num>>i&1);
    }
    printf("\n");
}

void count_bits(int num)
{
    int i, x, even_set = 0, odd_set = 0;
    for(i = 7; i >= 0; i--) {
        x = num>>i&1;
        if(i % 2 == 0) {
            if(x == 1) {
                even_set++;
            }
        } else {
            if(x == 1) {
                odd_set++;
            }
        }
    }
    printf("Count of even set bits: %d\n", even_set);
    printf("Count of odd set bits: %d\n", odd_set);
}

int main(void)
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    to_bin(num);
    count_bits(num);
    return 0;
}
