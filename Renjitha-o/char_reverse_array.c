// reverse character array

#include <stdio.h>

void char_reverse_array(char arr[],int size) {
        int j = 0;
        char barr[10];
        for (int i = size - 1; i >= 0; i--) {// from last element storing the elements into another element
                barr[j] = arr[i];
                j++;
        }
        for (int i = 0; i < 10; i++) {
                printf("arr[%d] : %c\n",i,barr[i]);
        }
}
int main(void)
{
        char arr[10] = {'a','b','c','d','e','f','g','h','i','j'};
        int size = sizeof(arr)/sizeof(arr[0]);
        printf("array after reverse:");
        char_reverse_array(arr,size);
        return 0;
}
