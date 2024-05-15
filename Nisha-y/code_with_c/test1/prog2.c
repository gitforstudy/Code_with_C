//print multiple of 4 using bitwise
#include<stdio.h>
int main()
{
	int num;
	printf("enter value");
	scanf("%d",&num);//ex if i give 6 as input it will give 24,(6= 00110, after left shift 2 it will give 11000 i.e 24
	printf("%d",num<<2);
}
	
