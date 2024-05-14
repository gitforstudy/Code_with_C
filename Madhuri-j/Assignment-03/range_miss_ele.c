#include <stdio.h>
void missing_nums(int a[], int n, int l, int m);

int main(void) {
    int a[10], n, i, j, l, m, result;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter from range: ");
    scanf("%d", &l);
    printf("Enter to range: ");
    scanf("%d", &m);
    missing_nums(a, n, l, m);
    printf("\n");
    return 0;
}

void missing_nums(int a[], int n, int l, int m) {
    int result;
    for(int i = l; i < m; i++) {
        result = 0;
        for(int j = 0; j < n; j++) { 
            if(a[j] == i) {
                result = 1;
		break;
            }
        }
        if(!result) {
		printf("%d ", i);
	}
    }
}
