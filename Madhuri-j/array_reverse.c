//Cprogram to reverse an array elements
#include <stdio.h>
void arr_reverse(int n,int a[]);
int main(void)
{
        int n, i, a[5];
        printf("Enter number of elements: ");
        scanf("%d", &n);
        printf("Enter array elements: ");
        for(i = 0; i < n; i++) {
                scanf("%d", &a[i]);
        }
        printf("Array before reverse: ");
        for(i = 0; i < n; i++) {
                printf("%d ", a[i]);
        }
        arr_reverse(n,a);// call function to reverse integer array
        return 0;
}

void arr_reverse(int n, int a[]) {
        printf("\n");
        printf("Array after reverse: ");
        for(int i = n-1; i >=0; i--) {// start the iteration from the last index of the array
                printf("%d ", a[i]);//print the array
        }
        printf("\n");
}

