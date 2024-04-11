#include<stdio.h>

int fib(int n);

int main() 
{
	int n,i;
        printf("Enter the range to print fibonocci series : \n");
	scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                printf("%d ",fib(i));
        }
        printf("\n");
        return 0;
}

int fib(int n)
{
        if(n==0 || n==1)
                return 1;
        return fib(n-1)+fib(n-2);
}
