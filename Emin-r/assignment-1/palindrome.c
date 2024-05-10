#include<stdio.h>

int main()
{
        int rem,rev,n,n1;
        printf("Enter the number to check : \n");
        scanf("%d",&n);
        n1=n;
        while(n!=0)
        {
                rem=n%10;
                rev=rev*10 + rem;
                n/=10;
        }
        
        if(rev==n1)
        printf("Palindrome\n");
        else
        printf("Not a palindrome\n");
        
        return 0;
}
