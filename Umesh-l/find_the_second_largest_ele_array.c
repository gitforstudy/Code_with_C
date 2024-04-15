#include<stdio.h>
#include<stdlib.h>
// find the second largest element in array 
int main(int argc,char **argv)//commnad line
{
	int a[11],i,largest,second_largest;

	for(i=1;i<argc;i++)
	{
		a[i]=atoi(argv[i]);//argument store in array 
	}

	largest=a[1];
	second_largest=a[2];
	if(largest>second_largest)//check which element largest and which one second largest
	{
		largest=a[1];
		second_largest=a[2];
	}
	else
	{
		largest=a[2];
		second_largest=a[1];
	}
	
	for(i=3;i<argc;i++)//rotate loop up to end 
	{
		if(largest<a[i])//find the largest array element 
		{
			second_largest=largest;
			largest=a[i];
		}
		else if(second_largest<a[i])//find the second largest array element 
		{
			second_largest=a[i];
		}
	}
	
	printf("second largest =%d \n",second_largest);
}
	
