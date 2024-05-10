#include<stdio.h>

fact(int);

int main()
{
        int n,i;
        printf("Enter the range : ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                printf("%d\t",fact(i));
        }
        return 0;
}

fact(int n)
{
        if(n==1)
                return 1;
         
        else
                return n*fact(n-1);
}
