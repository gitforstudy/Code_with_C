//C program to print sum of array elements
#include <stdio.h>
void sum_array(int n, int a[]);
int main(void)
{
        int a[10], n;
        printf("Enter number of elements: ");//size of array
        scanf("%d", &n);
        printf("Enter array elements: ");//array elements
        for(int i = 0; i < n; i++) {
                scanf("%d", &a[i]);
        }
        sum_array(n, a);
        return 0;
}

void sum_array(int n, int a[])
{
        int sum = 0;
        for(int i = 0; i < n; i++) {
                sum = sum + a[i];//adding array elements
        }
        printf("The sum of array elements is: %d\n", sum);//print sum of array elements
}
