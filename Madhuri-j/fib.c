#include <stdio.h>
int main(void)
{
	int i = 0, fib, num;
	int j = i + 1;
	printf("Enter the number: ");
	scanf("%d", &num);
	printf("%d+%d+", i , j);
	for(i = 0; i < num; ) {
		fib = i + j;
		i = j;
		j = fib;
		printf("%d+",fib);
	}
	printf("\n");
	return 0;
}
