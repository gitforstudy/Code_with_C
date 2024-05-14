//C program to clear nth bit of a number

#include <stdio.h>

void to_bin(int num)
{
    int i;
    for(i = 7; i >= 0; i--) {
        printf("%d", num>>i&1);
    }
    printf("\n");
}

void clear_bit(int num, int pos)
{
    int i, x, y;
    for(i = 7; i >= 0; i--) {
        x = num>>i&1;
        if(i == pos) {
            y = num ^ (1 << pos);
        }
    }
    to_bin(y);
}

int main(void)
{
    int num, pos;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the position: ");
    scanf("%d", &pos);
    to_bin(num);
    clear_bit(num, pos);
    return 0;
}
