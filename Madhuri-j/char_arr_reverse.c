//C program to reverse character array
#include <stdio.h>
void char_arr(int n, char arr[]);
int main(void)
{
        char arr[10] = {'a','b','c','d','e','f','g','h','i','j'};
        int n = 10;
        printf("Original character array: ");//printing original array
        for(int i = 0; i < n; i++) {
                printf("%c", arr[i]);
        }
        printf("\n");
        char_arr(n, arr);//function call
        return 0;
}

void char_arr(int n, char arr[]) { //function definition
        printf("Reversed char array: ");//printing reversed array
        for(int i = n-1; i >= 0; i--) {
                printf("%c", arr[i]);
        }
        printf("\n");
}
