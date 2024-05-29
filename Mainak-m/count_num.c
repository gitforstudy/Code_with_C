#include<stdio.h>
int main()
{
    int num=12345;
    int count=0;
    int rem;
    while(num!=0)
    {
        rem=num%10;
        count++;
        num/=10; 
    }
    printf("%d",count);
}