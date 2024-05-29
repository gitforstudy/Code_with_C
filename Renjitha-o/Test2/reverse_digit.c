//program to reverse digit using recursion

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int temp = 0,reverse = 0;
void reverse_num(int num)
{
	//int temp = 0,reverse = 0;
	if(num == 0){
		printf("0");
		//return 0;
	}else {
		temp = num % 10;
		if(isdigit(temp)) {
			reverse = reverse * 10 + temp;
			reverse_num (num/10);
			printf("Reverse:%d\n",reverse);
		}else {
			printf("input should be digits!!!\n");
		}
		 
	}
	//printf("Reverse:%d\n",reverse);
	

}

int main(void)
{
	int num,reverse;
	printf("enter the number:\n");
	scanf("%d",&num);
	reverse_num(num);
	//printf("After reverse:%d\n",reverse);
	return 0;
}
