//C program to flip bits using bitwise
#include <stdio.h>

void flip_bits(int num);

void to_bin(int num)
{
    int i;
    for(i = 15; i >= 0; i--) {
        printf("%d", num>>i&1);
    }
    printf("\n");
}

void flip_bits(int num)
{
    int x, i;
    for(i = 15; i >= 0; i--) {
        x = num>>i&1;
        if(x == 1) {
            x = 0;
            printf("%d", x);
        } else if(x == 0) {
            x = 1;
            printf("%d", x);
        }
    }
    
}

int main() {
    unsigned int num;
    printf("Enter the number: ");
    scanf("%x", &num);
    to_bin(num);
    flip_bits(num);
    return 0;
}
