#include <stdio.h>
int main(void)
{
	int num, i, sum = 0;
	printf("Enter the Limit Number: ");
	scanf("%d", &num);
	for(i = 1; i <= num; i++) {
		if(i % 2 == 0) {
			sum = sum + i;
		}
	}
	printf("The sum of even numbers is: %d\n", sum); 
	return 0;
}
