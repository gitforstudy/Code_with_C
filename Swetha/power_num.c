#include<stdio.h>
int main()
{
	int base,power,result=1;
	printf("%d",result);
	printf("enter the base value:");
	scanf("%d",&base);
	printf("enter the power to be calculate:");
	scanf("%d",&power);
	while(power!=0) {
		result = result*base;
		power--;
	}
	printf("the power of the given number is %d %d = %d",base,power,result);
}
