/* Binomial coefficient (n, k) is the order of choosing ‘k’ results from the given ‘n’ possibilities.The value of binomial coefficient of positive n and k is given by Cnk=n!/(n−k)!k! */
#include <stdio.h>
// Function for binomial coefficient table
int bin_table(int val) {
   for (int i = 0; i <= val; i++) {
      printf("%2d", i);
      int num = 1;
      for (int j = 0; j <= i; j++) {
         if (i != 0 && j != 0)
         num = num * (i - j + 1) / j;
         printf("%4d", num);
      }
      printf("\n");
   }
}
int main() {
   int value;
   printf("Enter value : ");
   scanf("%d",&value);
   bin_table(value);
   return 0;
}
