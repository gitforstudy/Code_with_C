//program to swap nibbles of a number

#include<stdio.h>
#include<stdlib.h>

void dec_to_bin(int input){
        for(int i= 15; i >= 0; i--){
            int k = input >> i;//leftshift by i times to get the number at last position
                if(k & 1){
                    printf("1");
                }else{
                    printf("0");
                }
        }
        printf("\n");
}
int main(void)
{
	unsigned int num;
	printf("enter the number:\n");
	scanf("%x",&num);
	unsigned int mask = 0x0f0f;
	unsigned int mask1 = 0xf0f0;
	num = ((num & mask) << 4 ) ^ ((num & mask1) >> 4);
	//printf("AFTER SWAPPING:%d",num);
	
	dec_to_bin(num);
	return 0;
}
