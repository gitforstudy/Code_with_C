// to prinit binomial coefficient of a number


#include <stdio.h>
int bin_table(int val) {
	for (int i = 0; i <= val; i++) {
		printf("%d", i);
		int num = 1;
		for (int j = 0; j <= i; j++) {
			if (i != 0 && j != 0)
				num = num * (i - j + 1) / j;
			printf(" %d", num);
		}
		printf("\n");
	}
}
int main() {
   int val;
   printf("enter the number:");
   scanf("%d",&val);
   if(val < 0) {
   	printf("run the program again and enter +ve numbers!!!");
   } else {
	   bin_table(val);
   }
   return 0;
}
