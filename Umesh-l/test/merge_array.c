#include<stdio.h>
void main()
{
	int s1[5]={1,2,3,4,5},s2[5]={6,7,8,9,10};
	int s3[10];
	int ele1,ele2,ele3;
	ele1=sizeof(s1)/sizeof(s1[0]);
	ele2=sizeof(s2)/sizeof(s2[0]);
	ele3=sizeof(s3)/sizeof(s3[0]);
	int i,j;

	j=0;

	for(i=0; i<ele1 && i<ele2 ;i++)
	{
		s3[j++]=s1[i];
		s3[j++]=s2[i];
	}
	/*	
	for(;s1[i];i++)
	{
		s3[j++]=s1[i];
	}
	for(;s2[i];i++)
	{
		s3[j++]=s2[i];
	}	
	*/
	for(j=0;j<ele3;j++)
	printf("%d ",s3[j]);
}
	
