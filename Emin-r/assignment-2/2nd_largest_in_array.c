//Program to find the second largest element in an array

#include<stdio.h>

int second_largest_in_arr(int a[],int size){

	for(int i=0;i<size-1;i++){
                for(int j=0;j<size-i-1;j++){
                        if(a[j]>a[j+1]){     // Sorting the array
                                int temp = a[j];
                                a[j] = a[j+1];
                                a[j+1] = temp;
                        }
                }
        } 	
	return a[size-2];
}
int main()
{
	int a[6] = {2,1,4,8,12,11};
	
	int size = sizeof(a)/sizeof(a[0]);
	
	printf ("Second largest element in this array is : %d\n",second_largest_in_arr(a,size));
	return 0;
}
