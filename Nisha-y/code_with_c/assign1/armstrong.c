#include<stdio.h>
int main()
{
 int i,n,rem,sum=0;
 printf("enter 3 digit no");
 scanf("%d",&n);
 int org=n;
 for(;n!=0;n=n/10)// this st(n=n/10)removing last digit from the no
 {
	 rem=n%10;
	 sum=sum+(rem*rem*rem);
 }	
 if(sum==org)
 
  printf("given no is armstrong");
  else
  printf("not a armstrong number");
} 


 
