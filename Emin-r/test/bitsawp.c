#include<stdio.h>

int swapBits(int num, int pos1, int pos2) 
{
    int bit1=(num>>pos1)&1;
    int bit2=(num>>pos2)&1;

    if(bit1!=bit2){
        num^=(1<<pos1);
        num^=(1<<pos2);
    }
    return num;
}

int main()
{
	int n,pos1,pos2;
	
	printf("Enter the number to shift the bits : \n");
	scanf("%d",&n);
	
	printf("Enter position 1 and position 2 of the bits to swap : \n");
	scanf("%d %d",&pos1,&pos2);
	
	printf("The number after swapping bit positions = %d\n",swapBits(n,pos1,pos2));
	return 0;	
}
