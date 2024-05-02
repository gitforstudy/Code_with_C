//program to convert integer to binary

#include<stdio.h>
void dec_to_bin(int input){
        for(int i= 16; i >= 0; i--){
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
    int input,rem,i = 1;
    unsigned int binary = 0;
    printf("enter the number:");
    scanf("%d",&input);
    dec_to_bin(input);
    return 0;
}
