/* count num of digits*/

#include <stdio.h>
int main(void)
{
	int count = 0,num;
	printf("enter the number:");
	scanf("%d",&num);
	while(num != 0) {
		int rem = num % 10;
		count++;
		num /= 10;
	}
	printf("count of digit:%d",count);
}
