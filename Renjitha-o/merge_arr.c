// program to merge 2 array  in 3rd array

#include <stdio.h>

void merge_arr(int arr[],int barr[],int size1,int size2,int size) {
        int carr[size];
        for(int i = 0; i < size1; i++) {
                carr[i] = arr[i];//adding 1st array into 3rd array
        }
        int j = 0;
        for (int i = size1; i < size; i++) {
                carr[i] = barr[j];//adding 2nd array into 3rd array
                j++;
        }
        for (int i = 0; i < size; i++) {
                printf ("carr[%d] : %d\n",i,carr[i]);
        }
}

int main(void)
{
        int arr[] = {1,2,3},barr[] = {4,5,6,7};
        int size1 = sizeof(arr)/sizeof(arr[0]);
        int size2 = sizeof(barr)/sizeof(barr[0]);
        int size = size1 + size2;
        printf("after merging array:\n");
        merge_arr(arr,barr,size1,size2,size);
        return 0;
}
