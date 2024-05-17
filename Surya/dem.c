#include <stdio.h>

    void merge_arrays(char chars[], int nums[], int char_length, int num_length) {
    // Merge arrays index by index
    int i, j;
    for (i = 0, j = 0; i < char_length && j < num_length; i++, j++) {
        printf("%c %d ", chars[i], nums[j]);
    }

    // Print remaining elements of the longer array if any
    while (i < char_length) {
        printf("%c ", chars[i++]);
    }
    while (j < num_length) {
        printf("%d ", nums[j++]);
    }
    }

    int main() {
    char chars[] = {'a', 'b', 'c', 'd'};
    int nums[] = {1, 2, 3, 4, 5,6,7};
    int char_length = sizeof(chars) / sizeof(chars[0]);
    int num_length = sizeof(nums) / sizeof(nums[0]);// run this
