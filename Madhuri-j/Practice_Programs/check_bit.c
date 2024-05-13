//C program to check nth bit is set or not

#include <stdio.h>
#include <stdlib.h>

void to_bin(int num)//func to convert number to binary
{
        int i;
        for(i = 7; i >= 0; i--) {
                printf("%d", num>>i&1);//printing number in binary
        }
        printf("\n");
}

void check_bit(int num, int pos)//func to check if bit is set or not
{
        int i, x;
        for(i = 7; i >= 0; i--) {
                x = num>>i&1;//extracting one bit from binary number
                if(i == pos) {//check if index and position are same
                        if(x == 1) {//if bit is one
                                printf("The bit at %d is set\n", pos);//pos bit is set
                        } else {
                                printf("The bit at %d is clear\n", pos);//pos bit is clear
                        }
                }
        }
}

int main(int argc, char *argv[])
{
    int num, pos;
    if(argc == 1) {//checking the number of inputs provided correct or not
        printf("Enter two inputs to proceed\n");//error to provide inputs
        exit(0);
    }
    num =atoi(argv[1]);//reading input from command line for num
    pos =atoi(argv[2]);//reading input from command line for pos
    to_bin(num);//func call for converting num to bin
    check_bit(num, pos);//func call to check if bit is 1 or 0
    return 0;
}
