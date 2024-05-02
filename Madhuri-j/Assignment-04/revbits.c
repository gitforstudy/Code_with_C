#include <stdio.h>

int to_bin(int num) {
	for(int i=31;i>=0;i--)
    	printf("%d", num>>i&1);
    	printf("\n");
}

int revbits(int num)
{
    	int i, j, x, y;
    	for(i = 31, j = 0; i > j; i--, j++) {
        	x=num>>i&1;
        	y=num>>j&1;
        	if(x != y) {
            		num = num^1<<j;
            		num = num^1<<i;
        	}
    	}
    	printf("After Reverse: \n");
    	to_bin(num);
    	return num;
}

int main(void)
{
    	int num,i;
	printf("Enter the number: ");
	scanf("%d", &num);
    	printf("Before Reverse: \n");
    	to_bin(num);
    	revbits(num);
    	return 0;
}
