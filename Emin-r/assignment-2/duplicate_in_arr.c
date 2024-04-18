// Program to delete duplicate elements in an array
#include <stdio.h>

void delete_dup(int a[],size,int b[]) {
	
	for(int i=0;i<size-1;i++){
                 if(a[i]!=a[i+1]){ // Comparing elements with one another
                        b[j]=a[i];
                        j++;
                }
        }
        
        for(int i=0;i<j;i++){
                a[i]=b[i];
        }
        printf("%d\n",size);
        
        for(int i=0;i<j;i++){
                printf("a[%d] :%d\n",i,a[i]);
        }
}

int main()
{
	int a[]={5,6,3,3,2,4,6,7},b[];
	int size=sizeof(a)/sizeof(a[0]);
	
	printf ("Array before deleting duplicate elements");
	for (int i=0;i<size;i++){
                printf("%d ",a[i]);
        }
	
	printf("Array after deleting duplicate elements:\n");
	
	delete_dup(a,size,b);
	
	return 0;
}
