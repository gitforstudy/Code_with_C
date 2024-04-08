/* count num of digits*/

#include <stdio.h>
int main(void)
{
	int count = 0,num;
	printf("enter the number:");
	scanf("%d",&num);
	while(num != 0) {
		int rem = num % 10;// get last digit
		count++;//add count by 1
		num /= 10;// divide the number by 10 to remove last digit
	}
	printf("count of digit:%d",count);
}
