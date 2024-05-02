//program to check x is power of y or not using bitwise

#include<stdio.h>

int main(void)
{
	int x,y;
	printf("enter the numbers:\n");
	scanf("%d %d",&x,&y);
	if((x != 0) && ((x & (x - 1) == 0) &&  (x % y == 0))) {
			printf("%d is not power of %d",x,y);
	} else {
		printf("%d is power of %d",x,y);
	}
	return 0;
}
