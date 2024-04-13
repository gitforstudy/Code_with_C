#include <stdio.h>

int main() {
    int num;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Iterate at least once, then continue until n becomes 0
    // Remove the last digit from n in each iteration
    // Increase the count by 1 in each iteration
    do {
        num /= 10;
        ++count;
    } while (num != 0);

    printf("Number of digits: %d", count);
    return 0;
}

