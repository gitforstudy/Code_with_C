#include<stdio.h>
int main()
{
    int num=12345;
    int rev=0,rem;
    while(num!=0)
    {
    rem=num%10;
    rev=rev*10+rem;
    num/=10;
    }
    printf("%d",rev);
    
}