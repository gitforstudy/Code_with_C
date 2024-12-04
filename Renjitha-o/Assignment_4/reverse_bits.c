// program to reverse bits
#include<stdio.h>
#include<stdlib.h>

void dec_to_bin(int input){
        for(int i= 15; i >= 0; i--){
            int k = input >> i;//leftshift by i times to get the number at last position
                if(k & 1){
		    //printf("hi");
                    printf("1");
                }else{
                    printf("0");
                }
        }
        printf("\n");
}

unsigned int reverse_bit(unsigned int num) {
	for(int i = 15,j = 0; i > j; i--,j++) {
		//if((num & ( 1 << i)>> i) ^ ((num &(1 >> j)) >> j)) { // to check the bits need to reverse is same or not
		if((num >> i&1) != (num>>j&1)) {
		//printf("hi\n");	
			num = num ^ ( 1 << i);//use xor operation to change to convert  
			num = num ^ ( 1 << j);
		}
	}
	return num;
}
int main(void)
{
	unsigned int num,result;
	printf("enter the number:\n");
	scanf("%x",&num);
	dec_to_bin(num);
	result = reverse_bit(num);
	printf("AFTER REVERSE:\n");
	dec_to_bin(result);
	return 0;
}
