#include <stdio.h>
void duplicate_arr(int a[], int k);

int main(void) {
    // Write C code here
    int a[10], n, i, j, k;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the distance to check between: ");
    scanf("%d", &k);
    duplicate_arr(a, k);
    printf("\n");
    return 0;
}

void duplicate_arr(int a[], int k) {
    int i, j;
    for(i = 0; i < k; i++) {
        for(j = i + 1; j < k; j++) {
            if(a[i] == a[j]) {
                printf("%d %d ", a[i], a[j]);
            }
        }
    }
}
