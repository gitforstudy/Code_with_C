#include<stdio.h>
int main()
{
	 int num,i,fact=1;
	 printf("enter a number:");
	 scanf("%d",&num);
	 if(num<0)
	 {
		 printf("number is negative");
	 }
	 else
	 { 
		 for(i=1;i<=num;i++)
		 {
			 fact=fact*i;
		 }
		 printf("%d",fact);
	 }
}
