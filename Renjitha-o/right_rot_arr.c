// program to rotate array in right position

#include <stdio.h>
int main(void)
{
        int arr[5] = {1,2,3,4,5};
        int i,j,k,temp,num;
        int size = sizeof(arr)/sizeof(arr[0]);
        printf ("ARRAY BEFORE RIGHT ROTATION\n");
        for (k = 0; k < size; k++) {
                printf("arr[%d] :%d\t",k,arr[k]);
        }
        printf("\n");
        printf("enter the times ,u need to rotate the array");
        scanf("%d",&num);
        int count = 0;
        while ( count < num) {// while loop for how may times you neeed to rotate
                temp = arr[size - 1];
                for (j = size; j >= 0; j--){
                        arr[j + 1] = arr[j];// store the  i+ 1 element in previous index
                        //printf("%d\n",arr[j]);
                }
                count++;
                arr[0] = temp;// add temp into last index
        }
        printf ("ARRAY AFTER RIGHT ROTATION\n");
        for (i = 0; i < size; i++) {
                printf("arr[%d] :%d\t",i,arr[i]);
        }
        printf("\n");
        return 0;
}
