#include<stdio.h>
int main()
{
 int i,num,num1=0,num2=1,sum=0,num3;
 printf("enter nth number for the series");
 scanf("%d",&num);
 for(i=1;i<=num;i++)
 {
	printf("%d",num1);
	num3=num1+num2;
	num1=num2;
	num2=num3;
 }
}

      	
 
