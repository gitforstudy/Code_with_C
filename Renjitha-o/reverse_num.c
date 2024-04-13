// program to reverse a number
#include <stdio.h>
int main(void)
{
	int num,rev = 0;
	printf("enter the number");
	scanf("%d",&num);
	int rem = 0;
	if (num < 0) {
		printf("cant't execute");
	} else {
		while(num > 0){
			rem = num % 10;// get last digit
			rev = rev * 10 + rem;//multiply the rev by 10 and add new digit
			num = num / 10;// divide the number by 10 remove last digit
		}
		printf("Reverse of a number:%d",rev);
	}
}
