//C program to swap particular bits


#include <stdio.h>

void to_bin(int num)
{
	int i;
	for(i = 7; i >= 0; i--) {
		printf("%d", num>>i&1);
	}
	printf("\n");
}

/*void swap_bits(int num, int n1, int n2)
{
	int i, x, y, temp;
	for(i = 31; i >= n2; i--) {
		x = num>>i&1;
		for(int j = 0; j <= n1; j++) {
			y = num>>j&1;
			if(i == n1 || j == n2) {
				if(x == 1 || y == 0) {
					x = 0;
					y = 1;
					temp = x & y;				
				}
			}
		}
	}
	to_bin(temp);
	printf("\n");
}*/

void swap_bits(int n, int p1, int p2)
{
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
