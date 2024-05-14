#include <stdio.h>

int main(void) 
{
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	printf("%d\n",(num % 2 == 0) ? printf("even") : printf("odd"));
	return 0;
}
