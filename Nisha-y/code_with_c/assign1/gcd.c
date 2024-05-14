#include<stdio.h>
int main()
{
 int num1,num2,min;
 printf("enter two number");
 scanf("%d %d",&num1,&num2);
 min= (num1<num2)?num1:num2;
 while(min>0)
 {
  if(num1%min==0&&num2%min==0)	
  {
    printf("The lcm of %d and %d is %d",num1,num2,min);
    break;
  }
   --min;
 }
} 
