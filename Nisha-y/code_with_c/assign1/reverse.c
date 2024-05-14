#include<stdio.h>
int main()
{
  int i,rem,num,rev=0;
  printf("enter a number");
  scanf("%d",&num);
  for(;num!=0;num=num/10)
  {
   rem=num%10;
    rev=rev*10+rem;
  }   
  printf("%d",rev);
}
