#include<stdio.h>
int main()
{
    int num=126;
    int sum=0,rem;
    while(num!=0)
    {
    rem=num%10;
    sum=sum+rem;
    num/=10;
    }
    printf("%d",sum);
}