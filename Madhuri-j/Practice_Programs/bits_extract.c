//C program to check whether bit position 3 is set or not, if set then extract bits from position 16 to 20 in a given 32 bit number

#include <stdio.h>
#include <stdlib.h>

void to_bin(int num)
{
	for(int i = 31; i >= 0; i--) {
		printf("%d", num>>i&1);
	}
	printf("\n");
}

void check_extract(int n, int p, int p1, int p2)
{
	int x, j;
		x = (n>>p)&1;
		if(x == 1) {
			for(j = p1; j <= p2; j++) {
				printf("%d", n>>j&1);
			}
		}
		printf("\n");
}

int main(int argc, char *argv[])
{
	int num, p = 3, p1, p2;
	if(argc == 1) {
		printf("Provide input!!\n");
		exit(0);
	}
	num = atoi(argv[1]);
	p1 = atoi(argv[2]);
	p2 = atoi(argv[3]);
	to_bin(num);
	check_extract(num, p, p1, p2);
	return 0;
}
