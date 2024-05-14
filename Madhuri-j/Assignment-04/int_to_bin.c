#include <stdio.h>

void tobinary(int num)
{
	int i, mask;
	for(i = 16; i >= 0; i--) {
		mask = 1 << i;
		if(num & mask)
			printf("1");
		else
			printf("0");
	}
}

int main(void)
{
	int num;
	printf("Enter the number to convert: ");
	scanf("%d", &num);
	tobinary(num);
	printf("\n");
	return 0;
}
