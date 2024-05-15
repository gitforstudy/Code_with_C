//merge 2 array in third array
#include<stdio.h>
#define N1 3
#define N2 8
#define M ((N1>N2)?(N1*2):(N2*2))
int main()
{
 int a[N1],b[N2],c[M]={0},i,k;//k used as a index in array
 printf("enter %d element for array a\n",N1);
 for(i=0;i<N1;i++)
 scanf("%d",&a[i]);
 printf("enter %d element for array a\n",N2);
 for(i=0;i<N2;i++)
 scanf("%d",&b[i]);
 printf("\n merging array a&b into c in alternative position\n");
 for(i=0,k=0;i<N1;i++,k+=2)
 c[k]=a[i];
 for(i=0,k=1;i<N2;i++,k+=2) 
 c[k]=b[i];
 printf("array element of c is:\n");
 for(i=0;i<M;i++)
 printf("%d\n",c[i]);
 return 0;
}




