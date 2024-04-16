#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//reverse the string 
void my_strcpy(char *,char *);//function definition of copy string
void my_strrev(char *);//function definition of reverse string
int my_strlen(char *);//function definiton of find the string length 
int main(int argc,char **argv)//command argument
{
	if(argc!=2)
	{
		printf("usage:./a.out add_string\n");
		return 0;
	}
	char s[10];
	int count_string;
	my_strcpy(s,argv[1]);//pass argument for copy a string from one location to another
	
	my_strrev(s);//reverse the string
	printf("%s\n",s);
}
//copy fuction
void my_strcpy(char *p,char *q)
{
	while(*q)
	{
		*p=*q;
		*q++;
		*p++;
	}
}
//reverse function
void my_strrev(char *p)
{
	int i,l;
	char temp;

	l=my_strlen(p);

	for(i=0,l=l-1;i<l;i++,l--)
	{
		temp=p[i];
		p[i]=p[l];
		p[l]=temp;
	}
}
//find the length  
int my_strlen(char *p)
{
	int count=0;
	while(*p)
	{
		count++;
		*p++;
	}
	return count;
}
