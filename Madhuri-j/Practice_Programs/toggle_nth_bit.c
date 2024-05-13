//C program to toggle nth bit

#include <stdio.h>

void to_bin(int num)
{
    int i;
    for(i = 7; i >= 0; i--) {
        printf("%d", num>>i&1);
    }
    printf("\n");
}

void toggle_bit(int num, int pos)
{
    int y;
    for(int i = 7; i >= 0; i--) {
        
        int x = num>>i&1;
        if(i == pos) {
            y = num ^ (1 << pos);
        } else {
            continue;
        }
    }
    to_bin(y);
}

int main(void) 
{
    int num;
    int pos;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the pos: ");
    scanf("%d", &pos);
    to_bin(num);
    toggle_bit(num, pos);
}
