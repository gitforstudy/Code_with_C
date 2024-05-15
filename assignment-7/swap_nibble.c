#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	b= (((a & 0x0F)<<4) | ((a & 0xF0)>>4));
	printf("%d",b);
}
