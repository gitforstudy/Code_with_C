#include<stdio.h>
#include<stdlib.h>
//WAP to find the sum of first n even numbers.
int main(int argc,char **argv)//command line arugment
{
	//checking arugment
	if(argc!=3)
	{
		printf("Usage:./a.out number1 to number2 \n");
		return 0;
	}
	int i,sum=0,num1,num2;
	num1=atoi(argv[1]);//convert into integer(string to integer)
	num2=atoi(argv[2]);

	//checking number if number1 > number2
	if( num1 > num2 )
	{
		printf("put second arugment number1 < number2\n");
		return 0;
	}
	
		
	//check the first number if odd number so add +1   
	if(num1%2)
	{
		num1=num1+1;
	}
	
	// sum of even number find
	for(i=num1;i<=num2;i=i+2)// rotate loop  arugment1(num1) to arugment(num2)
	{	
		//check if odd or even number
		if(i%2==0)
		{
			sum=sum+i;//add even number and sum with previous
			
		}
	}
	//print sum of even number 
	printf("sum of number = %d\n",sum);
}
	
