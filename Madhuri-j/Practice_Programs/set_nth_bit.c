//C program to set nth bit

#include <stdio.h>
#include <stdlib.h>

void to_bin(int num)//func for convert int to binary
{
        int i;
        for(i = 7; i >= 0; i--) {
                printf("%d", num>>i&1);//print binary number
        }
        printf("\n");
}

void set_bit(int num, int pos)//func for setting particular bit
{
        int x, i, y;
        for(i = 7; i >= 0; i--) {//iterating in binary bits
                x = num>>i&1;//extracting one bit from binary
                if(x == 0) {//if bit is 0
                        y = num | (1 << pos);//setting the bit
                }
        }
        to_bin(y);//func call to print the result in binary
}

int main(void)
{
        int num, pos;
        printf("Enter the number: ");
        scanf("%d", &num);//asking user data for number
        printf("Enter the position: ");
        scanf("%d", &pos);//asking for pos data
        to_bin(num);//func call to convert num to binary
        set_bit(num, pos);//func call to set particular bit
        return 0;
}
