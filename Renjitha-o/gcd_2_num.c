// program to print gcd of 2 numbers

#include <stdio.h>
int main(void)
{
	int n1,n2,gcd = 0;
	printf("enter 2 numbers:");// taking 2 user inputs
	scanf("%d %d",&n1,&n2);
	if (n1 < 0 && n2 < 0) {//checking the entered number is -ve or not ,if -ve then storing -ve numbers in variables
		n1 = -n1;
		n2 = -n1;
	}else {//calculating gcd
		while ( n1 != n2) {
			if (n1 > n2) {
				n1 -= n2;
			}else {
				n2 -= n1;
			}
		}

		if (n1 > n2) {
			printf("GCD:%d",n1);
		}else {
			printf("GCD:%d",n2);
		}
	}
}
