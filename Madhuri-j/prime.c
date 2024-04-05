#include <stdio.h>
int main(void)
{
	int num, i, temp = 0;
	printf("Enter the number: ");
	scanf("%d", &num);
	for(i = 2; i <= num/2; i++) {
		if(num % i == 0) {
			temp++;
			break;
		}
	}
	if(temp == 0 && num != 1) {
		printf("%d is a Prime number\n", num);
	} else {
		printf("%d is not a Prime number\n", num);
	}
	return 0;
}
