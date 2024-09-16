// Program to right rotate the elements of an array

#include <stdio.h>

void right_rotate(int a[],int num,int size){
	int count=0,temp;
        while(count<num){
                temp=a[size-1];
                for(int j=size-1;j>0;j--)
                        a[j]=a[j-1];// storing i+1th element in the previous index
                 
                count++;
                a[0]=temp;
        }
        printf ("Array after right rotation :\n");
        for(int i=0;i<size;i++)
                printf("%d\t",a[i]);
        
        printf("\n");
}
int main()
{
        int a[5]={1,2,3,4,5};
        int k,num;
        int size=sizeof(a)/sizeof(a[0]);
        printf ("Array before right rotation: \n");
        for(k=0;k<size;k++)
                printf("%d\t",a[k]);
        
        printf("\n");
        printf("Enter how many elements to right rotate an array :");
        scanf("%d",&num);
        right_rotate(a,num,size);
        return 0;
}
