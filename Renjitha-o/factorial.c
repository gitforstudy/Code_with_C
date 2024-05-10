#include <stdio.h>
int main(void){
	int fact,factorial = 1;
	printf("enter the number to find factorail");
	scanf("%d",&fact);
	for(int i = 1; i <= fact; i++){
		factorial = factorial * i;
	}
	printf("Factorial of %d:%d",fact,factorial);
	return 0;
}
