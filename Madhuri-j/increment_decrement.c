#include <stdio.h>
int main(void)
{
	int m, n;
	printf("Enter two integers: ");
	scanf("%d %d", &m, &n);
	m++;
	++n;
	printf("The value of m is: %d\n", m);
	printf("The value of n is: %d\n", n);
	m--;
	--n;
	printf("The value of m is: %d\n", m);
	printf("The value of m is: %d\n", m);
	return 0;
}

