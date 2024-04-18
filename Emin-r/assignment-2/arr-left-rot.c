// Program to rotate array in left position

#include <stdio.h>

void left_rot_arr(int arr[],int size,int num){
	int count=0,i,j,temp;
        while(count<num){
                temp=arr[0];
                for(j=0;j<size;j++)
                        arr[j]=arr[j+1];// storing i+1th element in previous index
                        
        	count++;
        	arr[size - 1] = temp;// add temp into last index
        }
        printf ("Array after left rotation :\n");
        for(i=0;i<size;i++)
                printf("%d\t",arr[i]);
        printf("\n");
}
int main(void)
{
	int arr[5] = {1,2,3,4,5};
	int i,j,k,temp,num;
	
	int size = sizeof(arr)/sizeof(arr[0]);
	printf ("Array before rotation: \n");
        for(k=0;k<size;k++){
                printf("%d\t",arr[k]);
        }
        printf("\n");
	printf("Enter how many elements to left rotate :\n");
	scanf("%d",&num);
	left_rot_arr(arr,size,num);
	
	return 0;
}
