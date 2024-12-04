//program to add 4 different integer values in one avriables and add the values


#include<stdio.h>
#include <stdlib.h>
int main(void)
{
	int num;
	printf("enter the numbers:\n");
	printf("Result = %d",scanf("%d",&num) + num +scanf("%d",&num)+num+scanf("%d",&num) +num + scanf("%d",&num)+num - 4);//scanf will return 1 at every time so it will add the result so that we need to substract the numbers how many times we're using scanf
	return 0;

}
