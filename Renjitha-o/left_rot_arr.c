// program to rotate array in left position

#include <stdio.h>

void left_rot_arr(int arr[],int size,int num) {
        int count = 0,i,j,temp;
        while ( count < num) {// while loop for how may times you neeed to rotate
                temp = arr[0];
                for (j = 0; j < size; j++){
                        arr[j] = arr[j+1];// store the  i+ 1 element in previous index
                        //printf("%d\n",arr[j]);
                }
                count++;
                arr[size - 1] = temp;// add temp into last index
        }
        printf ("ARRAY AFTER LEFT ROTATION\n");
        for (i = 0; i < size; i++) {
                printf("arr[%d] :%d\t",i,arr[i]);
        }
        printf("\n");
}
int main(void)
{
        int arr[5] = {1,2,3,4,5};
        int i,j,k,temp,num;
        int size = sizeof(arr)/sizeof(arr[0]);
        printf ("ARRAY BEFORE LEFT ROTATION\n");
        for (k = 0; k < size; k++) {
                printf("arr[%d] :%d\t",k,arr[k]);
        }
        printf("\n");
        printf("enter the times ,u need to rotate the array");
        scanf("%d",&num);
        left_rot_arr(arr,size,num);
        return 0;
}
