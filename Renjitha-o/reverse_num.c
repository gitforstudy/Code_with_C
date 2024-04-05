#include <stdio.h>
int main(void)
{
	int num,rev = 0;
	printf("enter the number");
	scanf("%d",&num);
	int rem = 0;
	while(num > 0){
		rem = num % 10;
		rev = rev * 10 + rem;
		num = num / 10;
	}
	printf("Reverse of a number:%d",rev);
}
