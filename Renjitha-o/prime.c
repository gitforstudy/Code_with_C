//program to find the given num is prime or not

#include <stdio.h>
int prime_num(int prime){
	for(int i = 2; i <= prime / 2; i++){// to continue till the half of prime number to reduce iteration
		if(prime % i == 0){// if it is prime num it is only divisible by 1 and given num,so check that by dividing each i value
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
	if (num < 0){
	printf("can't execute, run again and enter +ve num");
	}else {
		if(prime_num(prime)){//calling prime_num function
			printf("Not a prime Number");
		}else{
			printf("Prime number");
		}
	}	
	return 0;
}
