//program to remove duplicate elements
#include<stdio.h>
void delete_dup(int arr[],int size,int barr[]) {
	int j = 0;
        for (int i = 0; i < size - 1;i++) {
                if (arr[i] != arr[i + 1]) {// compare 1st elemnt with all other elements and if it is not equal.
                        barr[j] = arr[i];//add it into another array
                        j++;//increase index of 2nd array
                }
                //barr[j++] = arr[ size - 1];

        }
        for (int i = 0; i < j; i++) {
                arr[i] = barr[i];
        }
        printf ("%d\n",size);
        for (int i = 0; i < j; i++) {// print array after removing duplicate elements
                printf("arr[%d] :%d\n",i,arr[i]);
        }
}
void main(void)
{
        int arr[] = {4,5,6,2,1,1,3,5};
        int size = sizeof(arr)/sizeof(arr[0]);
        int barr[10],j = 0;
        printf ("array before deleting duplicate elements");
        for (int i = 0; i < size; i++) {// print array
                printf("arr[%d] :%d\n",i,arr[i]);
        }
        printf("after deleting duplicate elements:\n");
        delete_dup(arr,size,barr);
}
