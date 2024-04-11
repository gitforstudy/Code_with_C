#include <stdio.h>
#include <stdlib.h>

void printPatternA(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}
int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Invalid number of arguments");
        return 1;
    }

    int n = atoi(argv[1]);

    printf("Pattern A:\n");
    printPatternA(n);
}
