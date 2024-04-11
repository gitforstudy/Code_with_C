/* This program checks whether given number is armstrong number or not */
#include <math.h>
#include <stdio.h>

int main() {
   int num, originalNum, remainder, n = 0;
   float result = 0.0;

   printf("Enter an integer: ");
   scanf("%d", &num);

   // store the number of digits of num in n
   for (originalNum = num; originalNum != 0; ++n) {
       originalNum /= 10;
   }

   originalNum = num;

   while (originalNum != 0) {
       remainder = originalNum % 10;
       int i;
       int temp = 1;
       for (i = 0; i < n; ++i)
       {
	       temp *= remainder;
       }
       // store the sum of the power of individual digits in result
      
       result += temp;
       originalNum /= 10;
   }

   // if num is equal to result, the number is an Armstrong number
   if ((int)result == num)
    printf("%d is an Armstrong number.", num);
   else
    printf("%d is not an Armstrong number.", num);
   return 0;
}
