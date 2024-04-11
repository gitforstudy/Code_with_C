#include<stdio.h>
// int fact(int num)
// {
//     if(num==0)
//         return 1;
    
// }
int main()
{
    int num=5;
    int fact=1;
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
}