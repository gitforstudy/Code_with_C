#include <stdio.h>
int i = 0;
void sum_of_even(int range)
{
	//int i = 0;
	if(i <= range) {
		if(i % 2 == 0)
			printf("%d ", i);
		i++;
		sum_of_even(range);
	}
	//printf("\n");
}

int main(void)
{
	int range;
	printf("Enter the range: ");
	scanf("%d", &range);
	sum_of_even(range);
	printf("\n");	
	return 0;
}
