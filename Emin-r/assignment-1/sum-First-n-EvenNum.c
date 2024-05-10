/* Program to print the sum of first n even numbers. n is scanned from the commandline.
   Usage : on the command line use => executable n(i.e. the number till which you want to find the sum of even numbers. ) eg. ./a.out 10 - for first 10 even number.
   
   Author : Emin Riyaz 
   Date : 05/04/2024
*/
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int sum=0;
	for(int i=0;i<=atoi(argv[1]);i++)
	{
		if(i%2==0)
			sum+=i;
	}
	printf("Sum of the first %d even numbers = %d\n",atoi(argv[1]),sum);
	return 0;
	
}
