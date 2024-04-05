#include <stdio.h>
int prime_num(int prime){
	for(int i = 2; i <= prime / 2; i++){
		if(prime % i == 0){
			return 1;
		} else {
			return 0;
		}
	}
}

int main(void)
{
	int prime;
	printf("enter a number:");
	scanf("%d",&prime);
	if(prime_num(prime))
		printf("Not a prime Number");
	else 
		printf("Prime number");
		
	return 0;
}
