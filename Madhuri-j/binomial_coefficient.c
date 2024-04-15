#include<stdio.h>
int main(void) {
    int n, a, bi_nom, max;
    n = 0;
    printf("Enter the max positive value: ");
        scanf("%d", &max);
    do {
        a = 0, bi_nom = 1;
        
        printf("%2d", n);
        
        while (a <= n) {
            if (n == 0 || a == 0)
                printf("%4d", bi_nom);
            else {
                bi_nom = bi_nom * (n - a + 1) / a;
                printf("%4d", bi_nom);
            }
            a = a + 1;
        }
        printf("\n");
        n = n + 1;
    } while (n <= max);
    return 0;
}

