#include<stdio.h>
int main()
{
	int num=123;
	int rem,result=0,temp;
	temp=num;
	while(num!=0)
	{
	      rem=num%10;
	      result=result*10+rem;
	      num=num/10;
	 }
	printf("%d",result);
}
