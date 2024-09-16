//Program to merge two arrays into the 3rd array

#include<stdio.h>

void arr_merge(int a[],int b[],int Asize,int Bsize,int Csize){
	int c[Csize];
        for(int i=0;i<Asize;i++)
                c[i]=a[i];//Copying the 1st array into the 3rd array
 
        int j = 0;
        for (int i=Asize;i<Csize;i++){
                c[i] = b[j];//Copying the 2nd array into the 3rd array
                j++;
        }
        for(int i=0;i<Csize;i++)
                printf("%d\t",c[i]);
                
        printf("\n");        
}

int main()
{
	int a[]={1,2,3},b[]={4,5,6,7};

	int Asize=sizeof(a)/sizeof(a[0]);
	int Bsize=sizeof(b)/sizeof(b[0]);
	int Csize=Asize+Bsize;
	printf("Array after merging :\n");
	arr_merge(a,b,Asize,Bsize,Csize);
	return 0;
}
