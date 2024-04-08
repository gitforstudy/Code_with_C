// program to print the power of a number
#include <stdio.h>
int main(void)
{
	printf("enter the number:");
	int num,pow,power =1;
	scanf("%d",&num);
	printf("enter the power");
	scanf("%d",&pow);
	for(int i = 1; i <= pow; i++){
		power = power * num;//multiple the numbers with power till input number
	}
	printf("%d power of %d:%d",num,pow,power);
}
