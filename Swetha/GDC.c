#include<stdio.h>
int main()
{
	int a=56,b=98,gcd=0;
	for (int i = 1; i <= a && i <=b ; ++i) {
		// Check if 'i' is a factor of both integers
		if (a % i == 0 && b % i == 0)
			gcd = i;
	} 
	printf("%d",gcd);
}

