#include<stdio.h>
int main()
{
	int num=987654,count=0;
        int rem,result=0,temp;
        temp=num;
        while(num!=0) {
              rem=num%10;
              result=result*10+rem;
              num=num/10;
	      count++;
         }
	printf("the number od digits in the given number is %d",count);
}
