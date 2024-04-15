#include <stdio.h>

void reverse_array(int size,int arr[]) {
         int barr[size];
        int j = 0;
        for (int i = size -1; i >= 0; i--) {
                barr[j] = arr[i];
                j++;
        }
        for (int i = 0; i < 10; i++) {
                printf("arr[%d] : %d\n",i,barr[i]);
        }
}
int main(void)
{
        int arr[] = {1,2,3,4,5,6,7,8,9,10};
        int size = sizeof(arr)/sizeof(arr[0]);
        printf("Array after reverse:\n");
        reverse_array(size,arr);
        return 0;
}
