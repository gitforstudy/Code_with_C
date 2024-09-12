// To find lcm of 2  +ve numbers

#include <stdio.h>
int main(void) {
	int n1,n2,max = 0,flag = 1;
	printf("enter  2 positive numbers:");
	scanf("%d %d",&n1,&n2);
	if ( n1 < 0 || n2 < 0) {
		printf("please run again the code and enter only +ve num");
	}else {
		max = (n1 > n2) ? n1: n2;//to check the greatest of 2 num and store it in max
		while (flag) {
			if(max % n1 == 0 && max % n2 == 0) {// to find lcm
				printf("lcm of 2 num :%d",max);
				break;// break the while loop once you got the lcm or else it will go for infinite loop
			}
			max++;//if numbers are not divded by max then increment max till we're able to divide both numbers by max
		} 
	}
}


