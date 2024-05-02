//program to find x power of y using recursion

#include<stdio.h>

int pow_x_y(int num,int pow) {
	if(pow == 0) {
		return 1;
	}else {
		return num * pow_x_y(num,pow -1);
	}
}
int main(void)
{
	int num,pow;
	printf("enter the numbers to find power:");
	scanf("%d %d",&num,&pow);
	int result = pow_x_y(num,pow);
	printf("%d power %d is:%d",num,pow,result);
	return 0;
}
