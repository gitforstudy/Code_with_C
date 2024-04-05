#include<stdio.h>
/*
int count_digit(int n){
	int count = 0;
	while (n != 0){
		if (n ==0){
			return 0;
		}else {
			n = n / 10;
			count++;
		}
		return count;
	}
}*/
int main(void){
	int n,rem,rev = 0;
	printf("enter the number:");
	scanf("%d",&n);
	int num = n;
	while(n != 0){
		rem = num % 10;
		rev = rev * 10 + rem;
		n = n / 10;
	}
	if(num == rev){
		printf("Palindrome!!!");
	} else {
		printf("not Palindrome");
	}
	
	return 0;
}
