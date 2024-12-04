//C program to swap particular bits


#include <stdio.h>
#include <stdlib.h>

void to_bin(int num)
{
	int i;
	for(i = 7; i >= 0; i--) {
		printf("%d", num>>i&1);
	}
	printf("\n");
}

void swap_bits(int n, int p1, int p2)
{
	int x = n>>p1&1;
    	int y = n>>p2&1;
	if(p1 == p2) {
		printf("Same bits no swap\n");
		exit(0);
	}
	n = n ^ (1 << p1);
	n = n ^ (1 << p2);
	to_bin(n);
}

int main(void)
{
	int num, n1, n2;
	printf("Enter the number: ");
	scanf("%d", &num);
	printf("Enter the from and to bits to swap: ");
	scanf("%d %d", &n1, &n2);
	to_bin(num);
	swap_bits(num, n1, n2);
	return 0;
}
