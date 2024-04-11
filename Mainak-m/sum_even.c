#include<stdio.h>
int main()
{
    int even_num=10;
    int sum=0;
    for(int i=1;i<=even_num;i++)
    {
        if(i%2==0)
        {
            sum=(sum+i);
        }
        
    }
    printf("%d",sum);
}