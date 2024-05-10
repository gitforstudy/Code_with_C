#include<stdio.h>
#include<math.h>
int main()
{
        int n,rem,sum=0,count=0,temp,temp1;
        printf("Enter a number to check if it's an Armstrong Number : ");
        scanf("%d",&n);
        temp=temp1=n;
        
        while(temp!=0) //check number od digits
        {
                temp=temp/10;
                count++;
        }
        
        while(n!=0) // Reversing the number
        {
                rem=n%10;
                sum=sum+pow(rem,count);
                n/=10;
        }
        
        if(sum==temp1)
                printf("It is an Armstrong Number\n");
        else
                printf("Not an Armstrong Number\n");
        
        return 0;        
}
