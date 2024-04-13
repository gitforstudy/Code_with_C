///program to find sum of 1st even numbers

#include <stdio.h>

void main(void) {
	int num = 15,sum = 0;
	if(num < 0) {
		printf("can't execute");
	} else {
		for (int i = 0; i <= num; i++) {// to get all the even numbers iterate till the given range
			if (num % 2 == 0) {//check even or not
				sum += num;
			}
		}
		printf("sum :%d",sum);
	}
}
