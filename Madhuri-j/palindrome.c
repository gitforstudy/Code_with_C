#include <stdio.h>
int main(void)
{
	int num, rev = 0, rem, temp;
	printf("Enter the number: ");
	scanf("%d", &num);
	temp = num;
	while(num != 0) {
		rem = num % 10;
		rev = rev * 10 + rem;
		num = num / 10;
	}

	if(temp == rev) {
		printf("Number %d is palindrome\n", temp);
	} else {
		printf("Number %d is not a palindrome\n", temp);
	}
	return 0;
}
