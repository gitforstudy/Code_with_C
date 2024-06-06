//program to return next multiple of 4

#include<stdio.h>
int main(void)
{
	unsigned int num;
	printf("enter the number:");
	scanf("%x",&num);
	unsigned int mul = num << 2;
 	printf("multiple of 4:%d",mul);	
	return 0;
}
