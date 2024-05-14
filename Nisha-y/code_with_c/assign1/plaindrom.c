#include<stdio.h>
int main()
{
	 int i,n,rem,rev=0;
	 printf("enter a no");
	 scanf("%d",&n);
	 int org=n;
	 for(;n!=0;n=n/10)
	 {
           rem=n%10;
  	   rev=rev*10+rem;
	 }
	 if(org==rev)
	 
          printf("given no is a plaindrom");
	  else
          printf("not a plaindrom number");
	
}

