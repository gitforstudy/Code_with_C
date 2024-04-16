//Delete duplicate element from array
#include<stdio.h>
#include<stdlib.h>
void delete_duplicate_array_element(int *,int );
int main(int argc,char **argv)//commnad line
{
	int a[11],i;

	for(i=1;i<argc;i++){
		a[i]=atoi(argv[i]);//argument store in array 
	}
	
	delete_duplicate_array_element(a,argc);//call to function definition
}
void delete_duplicate_array_element(int *p,int ele)
{
	int i,j,k,l,flag;
	printf("before removing duplicates:");
	for(i=0;i<ele;i++)
	{
		printf("%d ",p[i]);
	}
	printf("\n");

	for(i=0,flag=0;i<ele;i++)//use nested for loop to find the duplicate elements in array
	{
		for(j=i-1;j>=0;j--){//use loop for check up to i duplicate elements delete or not
			if(p[i]==p[j]){//use if statement to check duplicate element
				flag=1;
				break;
			}
		}
	if(flag==0){//check statement if flag is 1 so already deleted 
		for(k=i+1;k<ele;k++){
			if(p[i]==p[k]){//use if statement to check duplicate element
				for(l=k;l<ele;l++){//delete the current position of the duplicate element
					{
						p[l]=p[l+1];
					}
				}
				ele--;//decrease the size of array after removing duplicate element
			}
		}
	}
	}
	printf("elements after removing duplicates:");
	for(i=0;i<ele;i++)
	{
		printf("%d ",p[i]);
	}
	printf("\n");
}
