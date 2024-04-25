#include <stdio.h>

int main(void)
{
	int x;
	
	printf("Sum is: %d\n", scanf("%d", &x) + x + scanf("%d", &x) + x + scanf("%d", &x) + x + scanf("%d", &x) + x - 4);
	return 0;
}
